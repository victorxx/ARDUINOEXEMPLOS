void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(A0);
  
  Serial.print("Valor do sensor: ");
  Serial.println(valor);

  delay(300);
}
