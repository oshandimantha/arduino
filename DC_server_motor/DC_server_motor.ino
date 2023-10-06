#include <Servo.h>

Servo myservo;

void setup() {
  
  pinMode(7, OUTPUT);
 
  myservo.attach(3);
}

void loop() {

  myservo.write(180);
}
