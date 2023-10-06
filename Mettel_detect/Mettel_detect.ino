#define S1 2
#define S2 3
#define S3 4
#define Con 6
#define Act 5

int b = 1;

void setup() {
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  pinMode(S3, INPUT_PULLUP);
  pinMode(Con, OUTPUT);
  pinMode(Act, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (b == 1) {
    digitalWrite(Con, HIGH);
    digitalWrite(Act, HIGH);
    b = 2;
  }
  if (b == 2) {
    if (digitalRead(S1) == 0) {
      b = 3;
    }
  }
  if (b == 3) {
    delay(2000);
    digitalWrite(Con, LOW);
    b = 4;
  }
  if (b == 4) {
    if (digitalRead(S2) == 0) {
      b = 5;
    } else {
      b = 6;
    }
  }

  if (b == 5) {

    digitalWrite(Act, LOW);
    delay(10000);
    b = 1;
  }

  else {
    if (b == 6) {
      if (digitalRead(S3) == 0) {
        b = 1;
      }else{
        b=4;
      }
    }
  }
}
