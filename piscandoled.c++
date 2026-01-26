int pinoled = 7;

void setup()
{
  pinMode(pinoled, OUTPUT);
}

void loop()
{
  digitalWrite(pinoled, HIGH);
  delay(100);
  digitalWrite(pinoled, LOW);
  delay(100);
}
