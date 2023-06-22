int Led = 13;
int Sensor = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando programa");
  pinMode(Led, OUTPUT);
  pinMode(Sensor, INPUT);
}

void loop() {
  int tiempo = analogRead(Sensor);
  Serial.print("Tiempo: ");
  Serial.println(tiempo);

  digitalWrite(Led, HIGH);
  delay(tiempo);
  digitalWrite(Led, LOW);
  delay(tiempo);
}
