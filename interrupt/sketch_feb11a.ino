#include <Servo.h>

Servo myservo;

int mot1=0;
int mot2=1;
int pir=2;
int buzzer=3;
int red=4;




void setup() {
  
  myservo.attach(13);
  pinMode(mot1,OUTPUT);
  pinMode(mot2,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(pir,OUTPUT);

  attachInterrupt(digitalPinToInterrupt(pir),tempStop,RISING);

}

void loop() {
 
  digitalWrite(red,LOW);
  digitalWrite(buzzer,LOW);
  digitalWrite(mot1,HIGH);
  digitalWrite(mot2,LOW);

  for(int i=0;i<180;i++)
  {
    myservo.write(i);
    delay(10);
  }


  for(int j=180;j>180;j--)
  {
    myservo.write(j);
    delay(10);
  }

}

void tempStop()
{
  digitalWrite(red,HIGH);
  digitalWrite(buzzer,HIGH);
  digitalWrite(mot1,LOW);
  digitalWrite(mot2,LOW);
  delay(2000);
}
