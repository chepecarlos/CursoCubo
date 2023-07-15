struct motor {
  int Derecho;
  int Izquierdo;
};

motor ModorDC = { 5, 6 };

void setup() {
  pinMode(ModorDC.Derecho, OUTPUT);
  pinMode(ModorDC.Izquierdo, OUTPUT);
}

void loop() {
  analogWrite(ModorDC.Derecho, 155);
  digitalWrite(ModorDC.Izquierdo, LOW);
}
