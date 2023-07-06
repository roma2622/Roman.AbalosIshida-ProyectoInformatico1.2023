#define led1 3
#define led2r 4
#define led2a 5
#define led3a 6
#define led3v 9
#define pot A0
#define boton 7
int estado = 0;
int valpot;
int valor;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2a, OUTPUT);
  pinMode(led2r, OUTPUT);
  pinMode(led3v, OUTPUT);
  pinMode(led3a, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  estado = digitalRead(boton);
  valpot = analogRead(pot);
  valor = map(valpot, 0, 1023, 0, 1000);
  if (estado == HIGH)
  {
    analogWrite(led1, 0);
    digitalWrite(led2r, LOW);
    digitalWrite(led2a, LOW);
    analogWrite(led3a, 0);
    analogWrite(led3v, 0);
  }
  else
  {
    analogWrite(led1, 255);
  delay(valor);
  analogWrite(led1, 0);
  digitalWrite(led2r, HIGH);
  digitalWrite(led2a, HIGH);
  delay(valor);
  digitalWrite(led2r, LOW);
  digitalWrite(led2a, LOW);
  analogWrite(led3a, 50);
  analogWrite(led3v, 50);
  delay(valor);
  analogWrite(led3a, 0);
  analogWrite(led3v, 0);
  }
}