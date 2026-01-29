#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(7);
}

void loop() {
  servo.write(90);
  delay(1000); // opcional, só para evitar repetir sem parar
  servo.write(120);
  delay(1000);
  servo.write(12);
  delay(1000);
}
