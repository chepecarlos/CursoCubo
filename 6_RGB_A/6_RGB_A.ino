int SensorLuz = A1;
int SensorPotenciometro = A0;
int pinRojo = 11;
int pinVerde = 10;
int pinAzul = 9;

void setup() {
  Serial.begin(9600);
  pinMode(SensorLuz, INPUT);
  pinMode(SensorPotenciometro, INPUT);
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {

  int NivelRojo = 255;
  int NivelVerde = 0;
  int NivelAzul = 0;

  analogWrite(NivelRojo, NivelRojo);
  analogWrite(pinVerde, NivelVerde);
  analogWrite(pinAzul, NivelAzul);

  delay(500);
}
