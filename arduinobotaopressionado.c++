int botao=13;


void setup()
  
{
  Serial.begin(9600);
  pinMode(botao,INPUT);
}

void loop()
  
{
  int estado=digitalRead(botao);
  if(estado==LOW)
  {
    Serial.println("botao A não pressionado");
  }
  if(estado==HIGH)
    
  {
    Serial.println("botao A pressionado");
  }
}
