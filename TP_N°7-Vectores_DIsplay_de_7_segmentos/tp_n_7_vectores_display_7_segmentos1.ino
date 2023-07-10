#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
int binario[4];
int peso[] = {8, 4, 2, 1};

// 16 8 4 2 1 <- peso

  int pines[] = { a , b , c , d , e , f , g, 10, 11, 12, 13  };
  int senal[] = { 1 , 1 , 1 , 1 , 1 , 1 , 1,  0,  0,  0,  0 };
  int numeros0[] = {1,1,1,1,1,1,0};
  int numeros1[] = {0,1,1,0,0,0,0};
  int numeros2[] = {1,1,0,1,1,0,1};
  int numeros3[] = {1,1,1,1,0,0,1};
  int numeros4[] = {0,1,1,0,0,1,1};
  int numeros5[] = {1,0,1,1,0,1,1};
  int numeros6[] = {1,0,1,1,1,1,1};
  int numeros7[] = {1,1,1,0,0,0,0};
  int numeros8[] = {1,1,1,1,1,1,1};
  int numeros9[] = {1,1,1,0,0,1,1};
  int numerosA[] = {1,1,1,0,1,1,1};
  int numerosB[] = {0,0,1,1,1,1,1};
  int numerosC[] = {1,0,0,1,1,1,0};
  int numerosD[] = {0,1,1,1,1,0,1};
  int numerosE[] = {1,0,0,1,1,1,1};
  int numerosF[] = {1,0,0,0,1,1,1};
//  1 0 1 0 1 <- bin
int* numeros[] = {numeros0, numeros1, numeros2, numeros3, numeros4, numeros5, numeros6, numeros7, numeros8, numeros9, numerosA, numerosB, numerosC, numerosD, numerosE, numerosF};

void setup(){
Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop()
{
  int aleatorio = random(0, 101);
 // Serial.println( aleatorio );
  binario[0] = digitalRead(10);
  binario[1] = digitalRead(11);
  binario[2] = digitalRead(12);
  binario[3] = digitalRead(13);
  
  Serial.print(   binario[0] );
  Serial.print(   binario[1] );
  Serial.print(   binario[2] );
  Serial.print(   binario[3] );
  
  int dec = 0;
  for(int i = 0; i < 4 ; i++ )
  {
   	dec = dec + peso[i] * binario[i];
  }
 Serial.print(" ");
 Serial.print("=");
 Serial.print(" ");
 Serial.println(dec);
  
  	for( int palmi=0 ; palmi < 3 ; palmi++)
    {
        for( int sufa=0 ; sufa < 7 ; sufa++ )
        {
            digitalWrite( pines[sufa] , numeros[dec][sufa] );
        }
	}
      	delay(10);
    
}