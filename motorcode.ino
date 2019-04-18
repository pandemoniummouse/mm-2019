int motorForward1 = 23;
int motorReverse1 = 22;
int motorForward2 = 21;
int motorReverse2 = 20;

int motorSpeed = 0;

void reverse() {
  digitalWrite(motorForward1, LOW);
  analogWrite(motorReverse1, motorSpeed);
  digitalWrite(motorForward2, LOW);
  analogWrite(motorReverse2, motorSpeed);
}

void forward() {
  digitalWrite(motorReverse1, LOW);
  analogWrite(motorForward1, motorSpeed);
  digitalWrite(motorReverse2, LOW);
  analogWrite(motorForward2, motorSpeed);
}

void setup() {
  Serial.begin(9600);
  pinMode(motorForward1, OUTPUT);
  pinMode(motorReverse1, OUTPUT);
  pinMode(motorForward2, OUTPUT);
  pinMode(motorReverse2, OUTPUT);
}

void loop() {
  Serial.println("Testing motor 1 forward/reverse");
  foward();
  delay(1000);
  reverse();
  delay(1000);
}
