const int sensor = A0;
float temperatura;
int pino = 13; // LED

void setup() {
  Serial.begin(9600);
  pinMode(pino, OUTPUT); // Configura o LED como saída
}

void loop() {
  int leitura = analogRead(sensor);                     
  temperatura = (leitura * 5.0 * 100.0) / 1024.0;  

  // Liga ou desliga LED conforme temperatura
  if (temperatura > 70.0) {
    digitalWrite(pino, HIGH); // Liga LED
  } else {
    digitalWrite(pino, LOW);  // Desliga LED
  }

  // Mostra temperatura no Serial Monitor
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println("");

  delay(1000); // Atualiza a cada 1 segundo
}
