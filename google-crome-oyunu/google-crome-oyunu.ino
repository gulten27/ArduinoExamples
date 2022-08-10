#include <Servo.h>
#define led  13 
Servo myservo;
void setup() {

    pinMode(led,OUTPUT); 
    Serial.begin(9600); 
    myservo.attach(9);
}

void loop() {

  int isik = analogRead(A0); 
  int zemin = analogRead(A1);
  Serial.println(zemin); 
 

  if(zemin > 500){
  if(isik > 480){ 
    myservo.write(130);
    digitalWrite(13,HIGH);
    delay(100);
    myservo.write(90);
    digitalWrite(13,LOW);
  }
  }
  else{

   if(isik < 480){ 
    myservo.write(130);
    digitalWrite(13,HIGH);
    delay(150);
    myservo.write(90);
    digitalWrite(13,LOW);

    
  }
}}                                                                     
