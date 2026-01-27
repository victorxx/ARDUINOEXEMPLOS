int led_vermelho = 2;
int led_amarelo = 7;
int led_verde = 8;

void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  randomSeed(analogRead(0)); // inicializa o gerador aleatório
}

void loop() {
  int escolhido = random(0, 3); // escolhe 0, 1 ou 2

  // Apaga todos os LEDs
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);

  // Liga o LED escolhido
  if (escolhido == 0) {
    digitalWrite(led_vermelho, HIGH);
  } else if (escolhido == 1) {
    digitalWrite(led_amarelo, HIGH);
  } else {
    digitalWrite(led_verde, HIGH);
  }

  delay(1000); // espera 1 segundo antes de mudar novamente
}
