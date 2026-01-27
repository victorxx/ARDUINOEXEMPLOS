int saida = 11;    // pino do buzzer
int botao = 7;     // pino do botão
int estado = 0;

void setup() {
  pinMode(saida, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  estado = digitalRead(botao);

  if (estado == HIGH) {          // botão pressionado
    tone(saida, 1500, 100);      // som alto
    delay(1000);
  } 
  else {                         // botão não pressionado
    tone(saida, 100, 100);       // som baixo
    delay(1000);
  }
}
