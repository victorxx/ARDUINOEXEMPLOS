int botao = 13;

void setup() {
  pinMode(botao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(botao) == LOW) {
    Serial.println("Botao pressionado");
    delay(200);
  }else{
    Serial.println("botoa solto");
  }
}
