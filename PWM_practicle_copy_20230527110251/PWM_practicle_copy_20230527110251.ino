
void setup() {
  pinMode(3, OUTPUT);


  // put your setup code here, to run once:
}

void loop() {
  analogWrite(3,0);
  delay(5000);
analogWrite(3,25);
  delay(5000);
  analogWrite(3,51);
  delay(5000); 
analogWrite(3,127);
  delay(5000);   
analogWrite(3,204);
  delay(5000); 
analogWrite(3,255);
  delay(5000);   

  // put your main code here, to run repeatedly:
}
