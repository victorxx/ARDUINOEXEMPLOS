int n1a = 6;  // Motor 1, pino A
int n1b = 7;  // Motor 1, pino B

int n2a = 8;  // Motor 2, pino A
int n2b = 9;  // Motor 2, pino B

void setup() {
  pinMode(n1a, OUTPUT);
  pinMode(n1b, OUTPUT);
  pinMode(n2a, OUTPUT);
  pinMode(n2b, OUTPUT);
}

void loop() {
  // Gira apenas o motor 1
  digitalWrite(n1a, HIGH);
  digitalWrite(n1b, LOW);

  // Desliga motor 2
  digitalWrite(n2a, LOW);
  digitalWrite(n2b, LOW);

  delay(2000); // gira por 2 segundos

  // Para motor 1
  digitalWrite(n1a, LOW);
  digitalWrite(n1b, LOW);

  delay(1000); // espera 1 segundo
}
