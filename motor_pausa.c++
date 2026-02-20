int n1a = 6;  // Motor 1, pino A
int n1b = 7;  // Motor 1, pino B

int n2a = 8;  // Motor 2, pino A
int n2b = 9;  // Motor 2, pino B

void setup() {
  pinMode(n1a, OUTPUT);
  pinMode(n1b, OUTPUT);
  pinMode(n2a, OUTPUT);
  pinMode(n2b, OUTPUT);
}

void loop()
  
{
  digitalWrite(n1a,HIGH);
  delay(2000);
  digitalWrite(n1a,LOW);
  delay(200000);
}
