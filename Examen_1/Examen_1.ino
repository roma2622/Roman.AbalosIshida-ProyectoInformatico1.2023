#define r 3
#define a 5
#define v 6
int potr = A0;
int pota = A1;
int potv = A2;
int valpotr;
int valpota;
int valpotv;
int ledr;
int leda;
int ledv;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(v, OUTPUT);
  pinMode(potr, INPUT);
  pinMode(pota, INPUT);
  pinMode(potv, INPUT);
  Serial.begin(9600);
}

void loop()
{
  valpotr = analogRead(potr);
  valpota = analogRead(pota);
  valpotv = analogRead(potv);

  
  ledr = map(valpotr, 0, 1023, 0, 255);
  leda = map(valpota, 0, 1023, 0, 255);
  ledv = map(valpotv, 0, 1023, 0, 255);
  Serial.print("R: ");
  Serial.print(ledr);
  Serial.print(" ");
  Serial.print("G: ");
  Serial.print(ledv);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.println(leda);
  delay(500);
  
  analogWrite(r, ledr);
  analogWrite(a, leda);
  analogWrite(v, ledv);
}