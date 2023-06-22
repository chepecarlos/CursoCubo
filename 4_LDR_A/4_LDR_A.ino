int Led = 13;
int SensorPotenciometro = A5;
int Pollo = 512;

void setup() {
  Serial.begin(9600);
  digitalWrite(SensorPotenciometro, INPUT);
  digitalWrite(Led, OUTPUT);
}

void loop() {
  int Intensidad = analogRead(SensorPotenciometro);

  Serial.print("Intensidad: ");
  Serial.print(Intensidad);

  if (Intensidad < Pollo){
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led, LOW);
  }
}
