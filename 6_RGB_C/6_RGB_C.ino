int SensorLuz = A1;
int SensorPotenciometro = A0;
int pinRojo = 11;
int pinVerde = 10;
int pinAzul = 9;
boolean anodoComun = true;
int pollo = 255;

void setup() {
  Serial.begin(9600);
  pinMode(SensorLuz, INPUT);
  pinMode(SensorPotenciometro, INPUT);
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {
  int nivelLuz = analogRead(SensorLuz);
  int nivelPotenciometro = analogRead(SensorPotenciometro);

  Serial.print("Luz: ");
  Serial.print(nivelLuz);
  Serial.print(" Potenciometro: ");
  Serial.println(nivelPotenciometro);

  if (nivelLuz < pollo) {
    if (nivelPotenciometro > 0 && nivelPotenciometro < 512) {
      cambiarColor(255, 0, 0);
    } else if (nivelPotenciometro > +512 && nivelPotenciometro < 1024) {
      cambiarColor(0, 255, 0);
    }
  } else {
    cambiarColor(0, 0, 0);
  }
  delay(300);
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