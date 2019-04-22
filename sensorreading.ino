int sensor = A0;
int sensorReading = 0;
int mappedValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
}

void loop() {
  sensorReading = analogRead(sensor);
  mappedValue = map(sensorReading, 72, 431, 0, 255);
  delay(100);
}
