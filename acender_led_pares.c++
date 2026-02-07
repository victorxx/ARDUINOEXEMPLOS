byte pinoled[] = {8, 9, 10, 11, 12, 13};
int x; // Declarando a variável x

void setup() {
  for(x = 0; x < 6; x++) pinMode(pinoled[x], OUTPUT);
}

void loop() {
  // LEDs pares acesos, ímpares apagados
  for(x = 0; x < 6; x++) {
    digitalWrite(pinoled[x], x % 2 == 0 ? HIGH : LOW);
  }
  delay(300);
}
