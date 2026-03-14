int poten=A1;
int valor=0;

void setup()
{
Serial.begin(9600);
}
void loop()
{
    valor=analogRead(poten);
    Serial.println(valor);
    delay(200);
}
