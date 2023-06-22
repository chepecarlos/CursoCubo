int BotonIzquierdo = 7;
int BotonDerecho = 6;
int Led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(BotonIzquierdo, INPUT);
  pinMode(BotonDerecho, INPUT);
  pinMode(Led, OUTPUT)
}

void loop() {
  boolean EstadoIzquierda = digitalRead(BotonIzquierdo);
  boolean EstadoDerecho = digitalRead(BotonDerecho);

  Serial.print(EstadoIzquierda);
  Serial.print("-");
  Serial.println(EstadoDerecho);

  if (EstadoIzquierda && EstadoDerecho) {
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led, LOW);
  }
  delay(500);
}
