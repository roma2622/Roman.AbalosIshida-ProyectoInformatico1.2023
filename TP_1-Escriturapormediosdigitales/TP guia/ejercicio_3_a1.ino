#define l1 1
#define l2 2
#define buzz 3

void setup()
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop()
{
  digitalWrite(l1, HIGH);
  tone(buzz, 440);
  delay(1000); 
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  tone(buzz, 380);
  delay(1000); 
  digitalWrite(l2, LOW);
}