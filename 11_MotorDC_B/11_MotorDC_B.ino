struct motor {
  int Derecho;
  int Izquierdo;
};

motor ModorDC = { 5, 6 };
int Sensor = A0;

void setup() {
  pinMode(ModorDC.Derecho, OUTPUT);
  pinMode(ModorDC.Izquierdo, OUTPUT);
  pinMode(Sensor, INPUT);
}

void loop() {
  int Velocidad = analogRead(Sensor);
  Velocidad = map(Velocidad, 0, 1023, -255, 255);
  MoverMotor(Velocidad);
}

void MoverMotor(int Velocidad) {
  if (Velocidad > 0) {
    analogWrite(ModorDC.Derecho, Velocidad);
    analogWrite(ModorDC.Izquierdo, 0);
  } else {
    analogWrite(ModorDC.Derecho, 0);
    analogWrite(ModorDC.Izquierdo, -Velocidad);
  }
}
