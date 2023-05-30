#define r1 3
#define a1 5
#define v1 6
#define r2 9
#define a2 10
#define v2 11


void setup()
{
  pinMode(r1, OUTPUT);
  pinMode(a1, OUTPUT);
  pinMode(v1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(v2, OUTPUT);
}

void loop()
{
  digitalWrite(r2, LOW);
  digitalWrite(a2, LOW);
  digitalWrite(v2, LOW);
  digitalWrite(r1, HIGH);//ROJO
  digitalWrite(a1, LOW);
  digitalWrite(v1, LOW);
  delay(1000);
  digitalWrite(r1, LOW);//CIAN
  digitalWrite(a1, HIGH);
  digitalWrite(v1, HIGH);
  delay(1000);
  digitalWrite(r1, LOW);//VERDE
  digitalWrite(a1, LOW);
  digitalWrite(v1, HIGH);
  delay(1000);
  digitalWrite(r1, HIGH);//MAGENTA
  digitalWrite(a1, HIGH);
  digitalWrite(v1, LOW);
  delay(1000);
  digitalWrite(r1, LOW);//AZUL
  digitalWrite(a1, HIGH);
  digitalWrite(v1, LOW);
  delay(1000);
  digitalWrite(r1, HIGH);//BLANCO
  digitalWrite(a1, HIGH);
  digitalWrite(v1, HIGH);
  delay(1000);
  digitalWrite(r1, HIGH);//AMARILLO
  digitalWrite(a1, LOW);
  digitalWrite(v1, HIGH);
  delay(1000);
  digitalWrite(r1, LOW);
  digitalWrite(a1, LOW);
  digitalWrite(v1, LOW);
  digitalWrite(r2, HIGH);//ROJO
  digitalWrite(a2, LOW);
  digitalWrite(v2, LOW);
  delay(1000);
  digitalWrite(r2, LOW);//CIAN
  digitalWrite(a2, HIGH);
  digitalWrite(v2, HIGH);
  delay(1000);
  digitalWrite(r2, LOW);//VERDE
  digitalWrite(a2, LOW);
  digitalWrite(v2, HIGH);
  delay(1000);
  digitalWrite(r2, HIGH);//MAGENTA
  digitalWrite(a2, HIGH);
  digitalWrite(v2, LOW);
  delay(1000);
  digitalWrite(r2, LOW);//AZUL
  digitalWrite(a2, HIGH);
  digitalWrite(v2, LOW);
  delay(1000);
  digitalWrite(r2, HIGH);//BLANCO
  digitalWrite(a2, HIGH);
  digitalWrite(v2, HIGH);
  delay(1000);
  digitalWrite(r2, HIGH);//AMARILLO
  digitalWrite(a2, LOW);
  digitalWrite(v2, HIGH);
  delay(1000);

}