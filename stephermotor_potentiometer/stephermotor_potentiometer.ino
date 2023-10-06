int x;
int y;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);
pinMode(A0,INPUT);
 
  }
  // put your setup code here, to run once:



void loop() {
x=analogRead(A0);
y=map(x,0,1023,280,2200);
digitalWrite(2,HIGH);
delayMicroseconds(y);
digitalWrite(2,LOW);
delayMicroseconds(y);
 

}