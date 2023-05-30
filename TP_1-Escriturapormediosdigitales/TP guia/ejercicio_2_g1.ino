#define buzz 3
int pot = A0;
int valpot;
int valbuzz;

void setup()
{
  pinMode(buzz, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  valpot = analogRead(pot);
  valbuzz = map(valpot,0,1023,0,100);
  tone(buzzer,valbuzz);
}