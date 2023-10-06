int x;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);

  x = 0; //c
  while (x < 200) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1911);
    digitalWrite(2, LOW);
    delayMicroseconds(1911);
    x = x + 1;
  }
   x = 0;
  while (x < 200) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1805); //C*
    digitalWrite(2, LOW);
    delayMicroseconds(1805);
    x = x + 1;
  }

  x = 0;
  while (x < 200) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1702); //D
    digitalWrite(2, LOW);
    delayMicroseconds(1702);
    x = x + 1;
  }
   x = 0;
  while (x < 200) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1607); //D*
    digitalWrite(2, LOW);
    delayMicroseconds(1607);
    x = x + 1;
  }

  x = 0;
  while (x < 250) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1516); //E
    digitalWrite(2, LOW);
    delayMicroseconds(1516);
    x = x + 1;
  }
   x = 0;
  while (x < 280) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1432); //F
    digitalWrite(2, LOW);
    delayMicroseconds(1432);
    x = x + 1;
  }
   x = 0;
  while (x < 300) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1351);//F*
    digitalWrite(2, LOW);
    delayMicroseconds(1351);
    x = x + 1;
  }

 
 

  x = 0;
  while (x < 325) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1275); //G
    digitalWrite(2, LOW);
    delayMicroseconds(1275);
    x = x + 1;
  }
  x = 0;
  while (x < 325) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1204); //G*
    digitalWrite(2, LOW);
    delayMicroseconds(1204);
    x = x + 1;
  }
 
  x = 0;
  while (x < 350) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1136); //A
    digitalWrite(2, LOW);
    delayMicroseconds(1136);
    x = x + 1;
  }
   x = 0;
  while (x < 375) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1072); //A*
    digitalWrite(2, LOW);
    delayMicroseconds(1072);
    x = x + 1;
  }
  x = 0;
  while (x < 400) {

    digitalWrite(2, HIGH);
    delayMicroseconds(1014);//B
    digitalWrite(2, LOW);
    delayMicroseconds(1014);
    x = x + 1;
  }
  x = 0;
  while (x < 450) {

    digitalWrite(2, HIGH);
    delayMicroseconds(956);//C
    digitalWrite(2, LOW);
    delayMicroseconds(956);
    x = x + 1;
  }
  
}

void loop() {

  //code here, to run repeatedly:
}