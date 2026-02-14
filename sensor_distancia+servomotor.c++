#include <Servo.h>

int trig = 8;
int echo = 9;
Servo servo1;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  servo1.attach(7);
  Serial.begin(9600);
}

void loop() {
  // envia pulso ultrassônico corretamente
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // lê duração e calcula distância em cm
  int duracao = pulseIn(echo, HIGH);
  int distancia = duracao * 0.034 / 2;

  // aciona o servo conforme a distância
  if (distancia < 20) {
    servo1.write(180);  // vira para 180° se objeto muito perto
  } else {
    servo1.write(0);    // retorna para 0° se longe
  }

  delay(200); // pequena pausa para estabilidade
}
