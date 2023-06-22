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
  Serial.print(NumeroEntero);
  Serial.print("-");
  Serial.println(sizeof(NumeroEntero));

  Serial.print("Decimal: ");
  Serial.print(NumeroDecimal);
  Serial.print("-");
  Serial.println(sizeof(NumeroDecimal));

  Serial.print("Letra: ");
  Serial.print(Letra);
  Serial.print("-");
  Serial.println(sizeof(Letra));

  Serial.print("Cadena: ");
  Serial.print(Cadena);
  Serial.print("-");
  Serial.println(sizeof(Cadena));

  Serial.print("Estado: ");
  Serial.print(Estado);
  Serial.print("-");
  Serial.println(sizeof(Estado));
}

void loop() {
}
