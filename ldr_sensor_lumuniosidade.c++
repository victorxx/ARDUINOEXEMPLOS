#define FOTO A0   // pino do LDR
#define LED 2     // pino do LED

void setup() {
  pinMode(LED, OUTPUT);   // define LED como saída
  pinMode(FOTO, INPUT);   // define LDR como entrada (opcional, já é padrão)
  Serial.begin(9600);     // inicializa comunicação serial
}

void loop() {
  int valor = analogRead(FOTO);   // lê valor do LDR (0-1023)
  Serial.println(valor);          // envia para o Monitor Serial
  delay(500);                     // espera 0,5 segundos antes da próxima leitura

  if (valor > 300) {              // se estiver claro
    digitalWrite(LED, HIGH);      // acende o LED
  } else {
    digitalWrite(LED, LOW);       // apaga o LED
  }
}
