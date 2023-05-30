#define l A0
#define l1 A1
#define l2 A2
#define l3 A3
#define l4 3
#define l5 5
#define l6 6
#define l7 9
#define l8 10
#define l9 11

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
	analogWrite(l, 0);
  analogWrite(l1, 25);
  analogWrite(l2, 50);
  analogWrite(l3, 75);
  analogWrite(l4, 100);
  analogWrite(l5, 125);
  analogWrite(l6, 150);
  analogWrite(l7, 175);
  analogWrite(l8, 220);
  analogWrite(l9, 255);
}