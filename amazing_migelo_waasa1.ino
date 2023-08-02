// C++ code
//
int motor = 3;
int trig = 4;
int echo = 5;
float t = 0;
float d = 0;
int speed = 0;

void setup()
{
  pinMode(motor,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  d=(.034/2)*t ;
  
  
  speed = map(d,0,200,0,255);
   if(d>=0 && d<=200)
   {
     
     speed = -speed;
     
     analogWrite(motor,speed);
     delay(1000); 
   }
  else
  {
    analogWrite(motor,LOW);
    
    
  }
}
     
     
     
     
     
     
     