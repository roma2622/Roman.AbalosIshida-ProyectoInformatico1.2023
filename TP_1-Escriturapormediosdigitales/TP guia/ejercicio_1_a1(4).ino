#define l 2
#define l1 3
#define l2 4
#define l3 6
#define l4 7

void setup()
{
  pinMode(l, OUTPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
}

void loop()
{
  digitalWrite(l3, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l, HIGH);
  digitalWrite(l4, HIGH);
  delay(1000); 
  digitalWrite(l, LOW);
  digitalWrite(l1, HIGH);
  delay(1000);
  digitalWrite(l1, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, HIGH);
  delay(1000);
}