int SensorLuz = A1;
int SensorPotenciometro = A0;
int pinRojo = 11;
int pinVerde = 10;
int pinAzul = 9;
boolean anodoComun = true;

void setup() {
  Serial.begin(9600);
  pinMode(SensorLuz, INPUT);
  pinMode(SensorPotenciometro, INPUT);
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {
  cambiarColor(255, 0, 0);
  delay(500);
  cambiarColor(0, 255, 0);
  delay(500);
  cambiarColor(0, 0, 255);
  delay(500);
}

void cambiarColor(int rojo, int verde, int azul) {
  if (anodoComun) {
    rojo = 255 - rojo;
    verde = 255 - verde;
    azul = 255 - azul;
  }
  analogWrite(pinRojo, rojo);
  analogWrite(pinVerde, verde);
  analogWrite(pinAzul, azul);
}