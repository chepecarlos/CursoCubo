#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define Ancho_Pantalla 128
#define Alto_Pantalla 64
#define Direccion_Pantalla 0x3C
#define Reset_Pantalla -1

Adafruit_SSD1306 pantalla(Ancho_Pantalla, Alto_Pantalla, &Wire, Reset_Pantalla);

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando la pantalla");

  if (!pantalla.begin(SSD1306_SWITCHCAPVCC, Direccion_Pantalla)) {
    Serial.println(F("Error en pantalla OLED"));
    for (;;)
      ;
  }
}

void loop() {

  pantalla.clearDisplay();
  delay(1000);

  pantalla.drawCircle(Ancho_Pantalla / 2, Alto_Pantalla / 2, 30, WHITE);
  pantalla.display();
  delay(2000);

  pantalla.fillRect(0, 0, Ancho_Pantalla, Alto_Pantalla / 2, BLACK);
  pantalla.display();
  delay(2000);

  pantalla.fillCircle(Ancho_Pantalla / 2 - 15, Alto_Pantalla / 4, 5, WHITE);
  pantalla.display();
  delay(1000);

  pantalla.fillCircle(Ancho_Pantalla / 2 + 15, Alto_Pantalla / 4, 5, WHITE);
  pantalla.display();
  delay(1000);
}
