int Rele = 13;
int Led = 7;

float TiempoRele = 0;
float TiempoLed = 0;

float EsperaRele = 5000;
float EsperaLed = 1000;

boolean EstadoRele = false;
boolean EstadoLed = false;

void setup() {
  pinMode(Rele, OUTPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  actualizarLed();
  actualizarRele();
}

void actualizarLed() {
  float TiempoActual = millis();
  if (TiempoActual - TiempoLed > EsperaLed) {
    TiempoLed = TiempoActual;
    digitalWrite(Led, EstadoLed);
    EstadoLed = !EstadoLed;
  }
}

void actualizarRele() {
  float TiempoActual = millis();
  if (TiempoActual - TiempoRele > EsperaRele) {
    TiempoRele = TiempoActual;
    digitalWrite(Led, EstadoRele);
    EstadoRele = !EstadoRele;
  }
}