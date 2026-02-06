byte pinoLed[] = {7,8,9,10,11,12};

void setup() {
  for(int i = 0; i < 6; i++) {
    pinMode(pinoLed[i], OUTPUT);
  }
}

void loop() {

  // ida (7 → 12)
  for(int i = 0; i < 6; i++) {
    digitalWrite(pinoLed[i], HIGH);
    delay(200);
    digitalWrite(pinoLed[i], LOW);
  }

  // volta (12 → 7)
  for(int i = 5; i >= 0; i--) {
    digitalWrite(pinoLed[i], HIGH);
    delay(200);
    digitalWrite(pinoLed[i], LOW);
  }
}
