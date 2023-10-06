#define S1 7
#define S2 6
#define S3 5
#define Sw1 8
#define Sw2 9
#define Sw4 11
#define Md 4
#define Mp 3  //127
int currentFloor = 1;
int targetFloor = 1;
int b = 1;


void setup() {
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(Sw1, INPUT);
  pinMode(Sw2, INPUT);
  pinMode(Sw4, INPUT);
  pinMode(Md, OUTPUT);
  pinMode(Mp, OUTPUT);
  Serial.begin(9600);
}
void loop() {
 
  if (digitalRead(Sw1) == HIGH) {
    targetFloor = 1;
  } else if (digitalRead(Sw2) == HIGH) {
    targetFloor = 2;
  } else if (digitalRead(Sw4) == HIGH) {
    targetFloor = 3;
  }
  if (currentFloor < targetFloor) {
    if (digitalRead(S1) == 0 && currentFloor == 1) {
      digitalWrite(Md, HIGH);
      analogWrite(Mp, 127);
      if (digitalRead(S1) == 1) {
        analogWrite(Mp, 0);
        currentFloor++;
      }
    } else if (digitalRead(S2) == 0 && currentFloor == 2) {
      digitalWrite(Md, HIGH);
      analogWrite(Mp, 127);
      if (digitalRead(S2) == 1) {
        analogWrite(Mp, 0);
        currentFloor++;
      }
    }
  } else if (currentFloor > targetFloor) {
    if (digitalRead(S2) == 0 && currentFloor == 2) {
      digitalWrite(Md, LOW);
      analogWrite(Mp, 127);
      if (digitalRead(S2) == 1) {
        digitalWrite(Md, LOW);
        analogWrite(Mp, 0);
        currentFloor--;
      }
    } else if (digitalRead(S3) == 0 && currentFloor == 3) {
      digitalWrite(Md, LOW);
      analogWrite(Mp, 127);
      if (digitalRead(S3) == 1) {
        digitalWrite(Md, LOW);
        analogWrite(Mp, 0);
        currentFloor--;
      }
    } else if (digitalRead(S1) == 0 && currentFloor == 1) {
      digitalWrite(Md, LOW);
      analogWrite(Mp, 127);
      if (digitalRead(S1) == 1) {
        digitalWrite(Md, LOW);
        analogWrite(Mp, 0);
        currentFloor--;
      }
    } else {
      analogWrite(Mp, 0);
    }
  }
}
