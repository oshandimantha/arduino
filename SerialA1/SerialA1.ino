void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  int count = Serial.available();
  if (count > 0) {    
    char RCV = Serial.read();
    Serial1.print(RCV);
  }
  // put your main code here, to run repeatedly:
}
