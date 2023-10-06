

#include <LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2); //actual
int x;
void setup() {
lcd.begin(16,2);

  // put your setup code here, to run once:

}

void loop() {
lcd.setCursor(2,3);
lcd.print(x);
x++;
delay(200);
lcd.clear();
  // put your main code here, to run repeatedly:

}
