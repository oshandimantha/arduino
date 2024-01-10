#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <AM2302-Sensor.h>

constexpr unsigned int SENSOR_PIN {2U};
const int relayPin = 7;
const int moistureSensorPin = A0;

AM2302::AM2302_Sensor am2302{SENSOR_PIN};
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    yield();
  }
  Serial.println(F("\n >>> Sensor Integration <<<\n"));

  // Set up the AM2302 sensor
  if (am2302.begin()) {
    delay(3000);
    Serial.println(F("AM2302 sensor initialization successful"));
  }
  else {
    Serial.println(F("Error: AM2302 sensor initialization failed. Please check sensor connection!"));
    while (true) {
      delay(10000);
    }
  }

  lcd.init();
  lcd.backlight();
  lcd.begin(16, 2);
  lcd.print("Sensor Integration");

  pinMode(relayPin, OUTPUT);
}

void loop() {
  static int checksum_err{0}, timeout_err {0}, read_freq_err {0};

  // Read data from AM2302 sensor
  auto status = am2302.read();

  // Check for errors
  if (status == AM2302::AM2302_ERROR_CHECKSUM) {
    ++checksum_err;
  }
  else if (status == AM2302::AM2302_ERROR_TIMEOUT) {
    ++timeout_err;
  }
  else if (status == AM2302::AM2302_ERROR_READ_FREQ) {
    ++read_freq_err;
  }

  // Display sensor status on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(am2302.get_Temperature());
  lcd.print("C");

  lcd.setCursor(9, 0);
  lcd.print("H:");
  lcd.print(am2302.get_Humidity());
  lcd.print("%");

  // Display moisture level on LCD
  int moistureLevel = analogRead(moistureSensorPin);
  int mappedMoisture = map(moistureLevel, 0, 1023, 100, 0);

  lcd.setCursor(0, 1);
  lcd.print("Moist:");
  lcd.print(mappedMoisture);
  lcd.print("%");

  // Control relay based on moisture level
  if (mappedMoisture <= 20) {
    digitalWrite(relayPin, LOW);
    lcd.setCursor(9, 1);
    lcd.print("R-on");
    
    
  } else {
    digitalWrite(relayPin, HIGH);
    lcd.setCursor(9, 1);
    lcd.print("R-off");
    
  }

  // Display errors and data on Serial Monitor
  Serial.print(F("\nAM2302 Sensor status:      "));
  Serial.println(status);

  Serial.print(F("Number checksum errors:   "));
  Serial.println(checksum_err);

  Serial.print(F("Number timeout errors:    "));
  Serial.println(timeout_err);

  Serial.print(F("Number read freq errors:  "));
  Serial.println(read_freq_err);

  Serial.print(F("\nTemperature: "));
  Serial.println(am2302.get_Temperature());

  Serial.print(F("Humidity:    "));
  Serial.println(am2302.get_Humidity());

  Serial.print(F("Moisture: "));
  Serial.println(moistureLevel);

  delay(1000);
}
