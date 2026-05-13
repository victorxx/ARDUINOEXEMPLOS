int capacitor = A0;
int cargaPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(cargaPin, OUTPUT);
}

void loop() {

  digitalWrite(cargaPin, HIGH);

  int valor = analogRead(capacitor);

  Serial.println(valor);

  if (valor > 900) {
    Serial.println("Capacitor carregado!");
  }

  delay(100);
}
