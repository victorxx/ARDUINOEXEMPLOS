byte pinoled[] = {8, 9, 10, 11, 12, 13};

void setup() {
  for(int x = 0; x < 6; x++) pinMode(pinoled[x], OUTPUT);
}

void loop() {
  for(int x = 0; x < 6; x++) {
    digitalWrite(pinoled[x], HIGH);
    delay(50);
  }
  for(int x = 0; x < 6; x++) {
    digitalWrite(pinoled[x], LOW);
    delay(50);
  }
}
