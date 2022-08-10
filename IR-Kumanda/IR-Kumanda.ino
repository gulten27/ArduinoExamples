
#include <IRremote.h>
int greenPin = 9;
int redPin = 10;
int bluePin = 11;
int sensorPin = 2;


IRrecv sensor(sensorPin);
decode_results deger;

void setup()
{
  sensor.enableIRIn();
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  
  if(sensor.decode(&deger)){
    Serial.print("Tus kodu: ");
    Serial.println(deger.value,HEX);
    sensor.resume();

    if(deger.value == 0xFFA25D){
      digitalWrite(greenPin,HIGH);
    }
    if(deger.value == 0xFF629D){
      digitalWrite(greenPin,LOW);
    }

    if(deger.value == 0xFF22DD){
      digitalWrite(redPin,HIGH);
    }
    if(deger.value == 0xFF02FD){
      digitalWrite(redPin,LOW);
    }

    if(deger.value == 0xFFE01F){
      digitalWrite(bluePin,HIGH);
    }
    if(deger.value == 0xFFA857){
      digitalWrite(bluePin,LOW);
    }
  }
  delay(300);
   
}
