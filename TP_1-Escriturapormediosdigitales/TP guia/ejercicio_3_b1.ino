#define r 1
#define a 2
#define v 3
int bot = 4;
int pot = A0;
int valpot;
int mapr;
int mapa;
int mapv;
int estado;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(v, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(bot, INPUT);
}

void loop()
{
  estado = digitalRead(bot);
  
  if(estado == HIGH){
  	valpot = analogRead(pot);
    
    mapr = map(valpot,0,1023,0,255);
    mapa = map(valpot,0,1023,0,255);
    mapv = map(valpot,0,1023,0,255);
  	
    analogWrite(r, mapr);
    analogWrite(a, mapa);
    analogWrite(v, mapv);
  }
  
  else{
  	analogWrite(r, 0);
    analogWrite(a, 0);
    analogWrite(v, 0);
  }
  
}