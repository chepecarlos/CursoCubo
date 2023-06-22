int Led = 13;
int Sensor = A0;

void setup() {
  pinMode(Led, OUTPUT);
  pinMode(Sensor, INPUT);
}

void loop() {
  int tiempo = analogRead(Sensor);

  digitalWrite(Led, HIGH);
  delay(tiempo);
  digitalWrite(Led, LOW);
  delay(tiempo);
}
