int trig = 13;
int echo = 12;

void setup() {
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

  // ler tempo do pulso
  long duracao = pulseIn(echo, HIGH);

  // calcular distância em cm
  int distancia = duracao * 0.034 / 2;

  // mostrar no Serial Monitor
  Serial.println(distancia);

  delay(500); // espera meio segundo
}
