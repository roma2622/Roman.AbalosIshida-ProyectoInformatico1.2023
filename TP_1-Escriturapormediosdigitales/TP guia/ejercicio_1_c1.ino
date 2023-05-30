#define l 1
#define l1 2
#define l2 3
#define l3 4
#define l4 5
#define l5 6
#define l6 7
#define l7 8
#define l8 9
#define l9 10

void setup()
{
  pinMode(l, OUTPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(l7, OUTPUT);
  pinMode(l8, OUTPUT);
  pinMode(l9, OUTPUT);
}

void loop()
{
  digitalWrite(l, HIGH);
  delay(1000); 
  digitalWrite(l, LOW);
  digitalWrite(l1, HIGH);
  delay(1000); 
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  delay(1000); 
  digitalWrite(l2, LOW);
  digitalWrite(l3, HIGH);
  delay(1000); 
  digitalWrite(l3, LOW);
  digitalWrite(l4, HIGH);
  delay(1000); 
  digitalWrite(l4, LOW);
  digitalWrite(l5, HIGH);
  delay(1000); 
  digitalWrite(l5, LOW);
  digitalWrite(l6, HIGH);
  delay(1000); 
  digitalWrite(l6, LOW);
  digitalWrite(l7, HIGH);
  delay(1000); 
  digitalWrite(l7, LOW);
  digitalWrite(l8, HIGH);
  delay(1000); 
  digitalWrite(l8, LOW);
  digitalWrite(l9, HIGH);
  delay(1000); 
  digitalWrite(l9, LOW);
}