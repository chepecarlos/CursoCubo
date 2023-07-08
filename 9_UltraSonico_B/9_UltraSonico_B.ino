#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define Ancho_Pantalla 128
#define Alto_Pantalla 64
#define Direccion_Pantalla 0x3C
#define Reset_Pantalla -1

Adafruit_SSD1306 pantalla(Ancho_Pantalla, Alto_Pantalla, &Wire, Reset_Pantalla);

const int PinEcho = 7;
const int PinTrigger = 6;


void setup() {
  Serial.begin(9600);
  pinMode(PinEcho, INPUT);
  pinMode(PinTrigger, OUTPUT);
  digitalWrite(PinTrigger, 0);

  if (!pantalla.begin(SSD1306_SWITCHCAPVCC, Direccion_Pantalla)) {
    Serial.println(F("Error en pantalla OLED"));
    for (;;)
      ;
  }
}

void loop() {
  long Distancia = calcularDistancia();
  if (Distancia > 3000) {
    return;
  }
  // Serial.print("Distancia : ");
  Serial.println(Distancia);
  // Serial.println(" cm");

  pantalla.setTextColor(WHITE);
  pantalla.clearDisplay();
  pantalla.setTextSize(2);
  pantalla.setCursor(0, 0);
  pantalla.println("Distancia");
  pantalla.print(Distancia);
  pantalla.println(" cm");
  pantalla.display();
  delay(500);
}

long calcularDistancia() {
  digitalWrite(PinTrigger, 0);
  delayMicroseconds(2);
  digitalWrite(PinTrigger, 1);
  delayMicroseconds(10);
  digitalWrite(PinTrigger, 0);

  long Tiempo = pulseIn(PinEcho, HIGH);

  long Distancia = Tiempo / 58;
  return Distancia;
}