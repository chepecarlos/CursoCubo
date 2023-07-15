#include <Servo.h>

struct MiServo {
  int pin;
  Servo motor;
  int posicion;
  int maxima;
  int minima;
};

MiServo hombro = { 2, Servo(), 1, 10, 110 };

#define CantidadRutina 8
int Rutina[CantidadRutina] = { 45, 120, 140, 50, 0, 180, 90 };

void setup() {
  hombro.motor.attach(hombro.pin);
}

void loop() {
  for (int i = 0; i < CantidadRutina; i++) {
    hombro.posicion = Rutina[i];
    MoverMotor(hombro);
    delay(2000);
  }
}

void MoverMotor(MiServo servo) {
  int posicion = constrain(servo.posicion, servo.minima, servo.maxima);
  servo.motor.write(posicion);
}
