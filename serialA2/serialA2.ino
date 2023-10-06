void setup() {
  
  Serial1.begin(9600);
  pinMode(2, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  int count = Serial1.available();
  if (count > 0) {
    char RCV = Serial1.read();
    if (RCV == 'A') {
      digitalWrite(2, HIGH);
    }
    if (RCV == 'a') {
      digitalWrite(2, LOW);
    }
  }
}