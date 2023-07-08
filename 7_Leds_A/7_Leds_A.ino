int Leds[8] = { 2, 3, 4, 5, 6, 7, 8, 9 };
int cantidadLed = 8;
int espera = 500;

void setup() {
  for (int i = 0; i < cantidadLed; i++) {
    pinMode(Leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < cantidadLed; i++) {
    digitalWrite(Leds[i], 1);
    delay(espera);
    digitalWrite(Leds[i], 0);
  }
}
