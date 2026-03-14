int G=2;
int F=3;
int A=4;
int B=5;
int E=6;
int D=7;
int C=8;
void setup()
{
    pinMode(G,OUTPUT);
    pinMode(F,OUTPUT);
    pinMode(A,OUTPUT);
    pinMode(B,OUTPUT);
    pinMode(E,OUTPUT);
    pinMode(D,OUTPUT);
    pinMode(C,OUTPUT);
}
void loop()

{
digitalWrite(C,HIGH);
delay(2000);
digitalWrite(B,HIGH);
delay(2000);
digitalWrite(D,HIGH);
delay(2000);
digitalWrite(E,HIGH);
delay(2000);
digitalWrite(F,HIGH);
delay(2000);
digitalWrite(A,HIGH);
delay(2000);
digitalWrite(G,HIGH);
delay(2000);
}
