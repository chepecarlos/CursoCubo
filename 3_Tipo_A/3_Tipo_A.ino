int NumeroEntero = 13;
float NumeroDecimal = 12.34;
char Letra = 'a';
String Cadena = "Sub a ChepeCarlos";
boolean Estado = true;

void setup() {
  Serial.begin(9600);
  Serial.println();
  Serial.println("Montando variables");

  Serial.print("Entero: ");
  Serial.println(NumeroEntero);

  Serial.print("Decimal: ");
  Serial.println(NumeroEntero);

  Serial.print("Letra: ");
  Serial.println(Letra);

  Serial.print("Cadena: ");
  Serial.println(Cadena);

  Serial.print("Estado: ");
  Serial.println(Estado);
}

void loop() {
}
