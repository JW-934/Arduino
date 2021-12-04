//author Jesse Watson 12-4-21

#define RED 11
#define GREEN 10
#define BLUE 9
#define delayTime 500

int red = 0;
int green = 0;
int blue = 0;

void setup() 
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

void loop() 
{
   for(; red < 200;)
   {
    red += 20;

    analogWrite(BLUE, blue);
    analogWrite(RED, red);
    delay(delayTime);
   }
   for(; blue < 200;)
   {
     blue += 20;

    analogWrite(BLUE, blue);
    analogWrite(RED, red);
    delay(delayTime);
   }
    for(; red > 0;)
   {
     red -= 20;

    analogWrite(BLUE, blue);
    analogWrite(RED, red);
    delay(delayTime);
   }
     for(; blue > 0;)
   {
     blue -= 20;

    analogWrite(BLUE, blue);
    analogWrite(RED, red);
    delay(delayTime);
   }

}
