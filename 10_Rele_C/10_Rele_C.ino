
struct Aparato {
  int pin;
  float tiempo;
  boolean estado;
  float espera;
};

Aparato Rele = { 13, 0, false, 5000 };
Aparato Led = { 7, 0, false, 1000 };

void setup() {
  pinMode(Rele.pin, OUTPUT);
  pinMode(Led.pin, OUTPUT);
}

void loop() {
  actualizarAparato(Rele);
  actualizarAparato(Led);
}

void actualizarAparato(Aparato aparatito) {
  float TiempoActual = millis();
  if (TiempoActual - aparatito.tiempo > aparatito.espera) {
    aparatito.tiempo = TiempoActual;
    digitalWrite(aparatito.pin, aparatito.estado);
    aparatito.estado = !aparatito.estado;
  }
}
