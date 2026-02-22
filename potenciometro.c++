int poten = A0;  // Pino analógico onde o potenciômetro está conectado
int valor = 0;   // Variável para armazenar o valor lido

void setup() {
  Serial.begin(9600);         // Inicializa a comunicação serial
}

void loop() {
  valor = analogRead(poten);  // Lê o valor do potenciômetro (0 a 1023)
  Serial.println(valor);      // Envia o valor para o Serial Monitor
  delay(200);                 // Pequena pausa para não saturar a saída
}
