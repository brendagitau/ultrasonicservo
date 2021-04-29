#include <Servo.h>
Servo myservo;
int potPin=4;
int red=13;
int green=2;
int blue=5;
int val;
                                                //int trigPin = 11;
                                                //int echoPin = 10;
                                                //long dist;
                                                //long duration;

 
void setup() 
{
myservo.attach(9); 
                                                  //pinMode(trigPin, OUTPUT);
                                                 //pinMode(echoPin, INPUT);
 pinMode(red,OUTPUT);
 pinMode(blue,OUTPUT);
 pinMode(green,OUTPUT);
                                                  //pinMode(trigPin,OUTPUT);
                                                 //pinMode(echoPin,INPUT);
  
  
     Serial.begin(9600);
}
 
void loop() { 
  
  val= analogRead(potPin);
  val =map(val,0,1023,0,180);
  myservo.write(10);
  
  if (val<=1023)
  {
             digitalWrite(red,HIGH);
             delay(1000);
             digitalWrite(red,LOW);
             delay (1000);
             myservo.write(120);
   
    
  }
   if (val<=512)
              
         {
             digitalWrite(blue,HIGH);
             delay(1000);
             digitalWrite(blue,LOW);
             delay(1000);
             myservo.write(150);
   
 }else
 { myservo.write(0);}
  
if (val<=300)
              
         {
             digitalWrite(green,HIGH);
             delay(1000);
             digitalWrite(green,LOW);
             delay(1000);
             myservo.write(169);
   
 }else
 { myservo.write(0);}  
  
       
            }