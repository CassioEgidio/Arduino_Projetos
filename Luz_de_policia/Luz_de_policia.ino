int v1 = 13;
int v2 = 12;
int v3 = 11;
int v4 = 10;
int a1 = 9;
int a2 = 8;
int a3 = 7;
int a4 = 6;

void setup()
{
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  pinMode(v3, OUTPUT);
  pinMode(v4, OUTPUT);
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
  pinMode(a4, OUTPUT);
}
void loop()
{
    digitalWrite(v1, HIGH);
    digitalWrite(v2, HIGH);
    digitalWrite(v3, HIGH);
    digitalWrite(v4, HIGH);
    delay(200);

    digitalWrite(v1, LOW);
    digitalWrite(v2, LOW);
    digitalWrite(v3, LOW);
    digitalWrite(v4, LOW);
    delay(200);
 
    digitalWrite(a1, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(a3, HIGH);
    digitalWrite(a4, HIGH);
    delay(200);
  
    digitalWrite(a1, LOW);
    digitalWrite(a2, LOW);
    digitalWrite(a3, LOW);
    digitalWrite(a4, LOW);
    delay(200);
}