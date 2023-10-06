int x;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);

  x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(2200);
    digitalWrite(2, LOW);
     delayMicroseconds(2200);
    x = x + 1;
  }

  x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(2000);
    digitalWrite(2, LOW);
     delayMicroseconds(2000);
    x = x + 1;
  }

  x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(1800);
    digitalWrite(2, LOW);
     delayMicroseconds(1800);
    x = x + 1;
  }

  x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(1200);
    digitalWrite(2, LOW);
     delayMicroseconds(1200);
    x = x + 1;
  }
 
  x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(1000);
    digitalWrite(2, LOW);
     delayMicroseconds(1000);
    x = x + 1;
  }
   x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(500);
    digitalWrite(2, LOW);
     delayMicroseconds(500);
    x = x + 1;
  }
   x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(400);
    digitalWrite(2, LOW);
     delayMicroseconds(400);
    x = x + 1;
  }
   x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(300);
    digitalWrite(2, LOW);
     delayMicroseconds(300);
    x = x + 1;
  }
    x = 0;
  while (x < 800) {

    digitalWrite(2, HIGH);
     delayMicroseconds(280);
    digitalWrite(2, LOW);
     delayMicroseconds(280);
    x = x + 1;
  }
}

void loop() {

  //code here, to run repeatedly:
}
