void setup() {
  pinMode(2,INPUT_PULLUP);
  pinMode(3,OUTPUT);


  // put your setup code here, to run once:
}

void loop() {
int x =digitalRead(2);
if (x==1){
  digitalWrite(3,HIGH);  
}
if (x==0){
  digitalWrite(3,LOW);
}

 
  // put your main code here, to run repeatedly:
}
