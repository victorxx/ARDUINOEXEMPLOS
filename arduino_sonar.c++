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

  // mostrar distância no Serial Monitor
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // estrutura if simples
  if (distancia < 20) {
    Serial.println("Objeto muito perto!");
    digitalWrite(led, HIGH);  // acende LED
  } else if (distancia < 50) {
    Serial.println("Objeto a uma distancia média");
    digitalWrite(led, HIGH);// apaga LED
  } else {
    Serial.println("Objeto longe");
    digitalWrite(led, LOW);   // apaga LED
  }

  delay(500); // espera meio segundo
}
