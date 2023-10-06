void setup() {
pinMode(A1,INPUT);
pinMode(5,OUTPUT);
Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {

int x=analogRead(A1);
int y=map(x,0,1023,0,255);
analogWrite(5,y);
Serial.println(x);  // put your main code here, to run repeatedly:

}