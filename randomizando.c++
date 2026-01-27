int ledvermelho = 2;
int ledamarelo = 7;
int ledverde = 8;

void setup() {
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  randomSeed(analogRead(0)); // inicializa o gerador de números aleatórios
}

void loop() {
  // Escolhe aleatoriamente um número entre 0 e 2
  int escolhido = random(0, 3); // 0 = vermelho, 1 = amarelo, 2 = verde

  // Apaga todos os LEDs
  digitalWrite(ledvermelho, LOW);
  digitalWrite(ledamarelo, LOW);
  digitalWrite(ledverde, LOW);

  // Liga o LED escolhido
  if (escolhido == 0) {
    digitalWrite(ledvermelho, HIGH);
  } else if (escolhido == 1) {
    digitalWrite(ledamarelo, HIGH);
  } else {
    digitalWrite(ledverde, HIGH);
  }

  delay(1000); // espera 1 segundo antes de escolher outro LED
}
