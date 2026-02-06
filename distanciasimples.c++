int trig = 13;
int echo = 12;
int led = 8; // pino do LED

void setup() {
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // enviar pulso
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // medir tempo do pulso
  long duracao = pulseIn(echo, HIGH);

  // calcular distância em cm
  int distancia = duracao * 0.034 / 2;

  // acender ou apagar LED dependendo da distância
  if(distancia < 50) {
    digitalWrite(led, HIGH); // acende
  } else {
    digitalWrite(led, LOW);  // apaga
  }

  // esperar meio segundo antes da próxima leitura
  delay(500);
}
