#define l 1
int pot = A0;
int valpot;
int tiempo;

void setup()
{
  pinMode(l, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
 	valpot = analogRead(pot);
  tiempo = map(valpot,0,1013,0,1000) /2;
  analogWrite(l, 255);
  delay(tiempo);
  analogWrite(l, 0);
  delay(tiempo);
  
}