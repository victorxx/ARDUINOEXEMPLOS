int pot = A0;
int valor = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
  
  
{
  valor=analogRead(pot);
  Serial.println(valor);
  delay(200);
}
