#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcdekranim(0x27,16,2);

int trigPin = 7;
int echoPin = 6;
int sure;
int uzaklik;

void setup() 
{

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  lcdekranim.init();
  lcdekranim.backlight(); 
}

void loop()
{

  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  sure = pulseIn(echoPin,HIGH,11600);

  uzaklik = sure*0.0345/2;

  delay(250);

  lcdekranim.clear();
  lcdekranim.setCursor(1,0);
  lcdekranim.print("Uzaklik");
  lcdekranim.setCursor(1,1);
  lcdekranim.print(uzaklik);
  lcdekranim.print("cm");
  
  
}
