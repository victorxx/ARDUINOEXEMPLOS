// Pinos do display conforme você enviou
int G = 2;
int F = 3;
int A = 4;
int B = 5;
int E = 6;
int D = 7;
int C = 8;

void setup() {
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
}

void loop() {
  // Número 3 → segmentos A, B, C, D, G acesos
  digitalWrite(C,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(A,HIGH);
  delay(1000);
}
