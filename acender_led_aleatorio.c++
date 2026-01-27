int ledvermelho = 2;
int ledamarelo = 7;
int ledverde = 8;

void setup() {
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledverde, OUTPUT);
}

void loop() {
  // Liga o LED vermelho
  digitalWrite(ledvermelho, HIGH);
  delay(1000); // espera 1 segundo

  // Desliga o LED vermelho
  digitalWrite(ledvermelho, LOW);
  delay(1000); // espera 1 segundo
  
  digitalWrite(ledamarelo,HIGH);
  delay(1000);
  digitalWrite(ledamarelo,LOW);
  delay(1000);
  digitalWrite(ledverde,HIGH);
  delay(1000);
  digitalWrite(ledverde,LOW);
}
