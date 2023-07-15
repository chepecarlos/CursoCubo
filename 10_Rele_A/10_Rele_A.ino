int Rele = 13;

void setup() {
  pinMode(Rele, OUTPUT);
}

void loop() {
  digitalWrite(Rele, HIGH);
  delay(1000);
  digitalWrite(Rele, LOW);
  delay(1000);
}
