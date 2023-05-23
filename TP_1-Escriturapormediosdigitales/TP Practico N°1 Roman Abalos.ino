#define led1 3
#define led2a 5
#define led2r 6
#define led3v 9
#define led3a 10

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2a, OUTPUT);
  pinMode(led2r, OUTPUT);
  pinMode(led3v, OUTPUT);
  pinMode(led3a, OUTPUT);
}

void loop()
{
  analogWrite(led1, 255);
  delay(1000);
  analogWrite(led1, 0);
  digitalWrite(led2a, HIGH);
  digitalWrite(led2r, HIGH);
  delay(1000);
  digitalWrite(led2a, LOW);
  digitalWrite(led2r, LOW);
  analogWrite(led3v, 120);
  analogWrite(led3a, 120);
  delay(1000);
  analogWrite(led3v, 0);
  analogWrite(led3a, 0);
}