#define S1 7
#define S2 6
#define S3 5
#define Sw1 8
#define Sw2 9
#define Sw4 11
#define Md 2
#define Mp 3 //127
int currentFloor = 1;
int targetFloor = 1;

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
  if (currentFloor < targetFloor) {
    // Lift is below target floor, move up
    if (digitalRead(S1) == 0) {
      digitalWrite(Md, HIGH);
      analogWrite(Mp, 127);
      if (digitalRead(S1) == 1) {
        analogWrite(Mp, 0);
        currentFloor++;
      }
    }
  } else if (currentFloor > targetFloor) {
    // Lift is above target floor, move down
    if (digitalRead(Sw2) == 0) {
      digitalWrite(Md, LOW);
      analogWrite(Mp, 127);
      if (digitalRead(S1) == 1) {
        digitalWrite(Md, LOW);
        analogWrite(Mp, 0);
        currentFloor--;
      }
    }
  } else {
    // Lift is at target floor, stop
    analogWrite(Mp, 0);
  }
  
  // Update target floor based on user input (e.g., button presses)
  // You can add your logic here to change the target floor
}
