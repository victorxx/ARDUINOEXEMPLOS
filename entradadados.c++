String dado="";
void setup()
  
{
  Serial.begin(9600);
}


void loop()
  
{
  if(Serial.available()>0)
  {
   dado=Serial.readString();
   Serial.println(dado);
  }
}
