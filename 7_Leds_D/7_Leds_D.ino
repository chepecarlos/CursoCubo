int Leds[8] = { 2, 3, 4, 5, 6, 7, 8, 9 };
int cantidadLed = 8;
int espera = 500;

void setup() {
  for (int i = 0; i < cantidadLed; i++) {
    pinMode(Leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < cantidadLed; i = i + 2) {
    digitalWrite(Leds[i], 1);
    digitalWrite(Leds[i + 1], 1);
    delay(espera);
    digitalWrite(Leds[i], 0);
    digitalWrite(Leds[i + 1], 0);
  }

  for (int i = 7; i > 0; i = i - 2) {
    digitalWrite(Leds[i], 1);
    digitalWrite(Leds[i - 1], 1);
    delay(espera);
    digitalWrite(Leds[i], 0);
    digitalWrite(Leds[i - 1], 0);
  }
}
