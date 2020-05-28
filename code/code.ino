#include <Servo.h>
Servo myser;

#define trigPin 9
#define echoPin 10
int duration ;
int distance;
void setup() {
  Serial.begin(9600);
   pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  myser.attach(8);
 myser.writeMicroseconds(1500);
}

void loop() {
  myser.write(0);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(0.034*duration)/2;
  if(distance<=10)
  {
    myser.write(60);
    delay(600);
    }
    else{
      myser.write(0);
      delay(600);
      }
 Serial.println(distance);
 Serial.print("Distance:  cm");
}



//#created by S V Saxena
     //AutoBot
