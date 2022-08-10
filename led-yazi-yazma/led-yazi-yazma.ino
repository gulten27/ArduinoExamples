#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcdekranim(0x27,16,2);

void setup() 
{
  lcdekranim.init();
  lcdekranim.backlight();
  lcdekranim.setCursor(2,0);
  lcdekranim.print("gulten dogan");
  lcdekranim.setCursor(4,1);
  lcdekranim.print("KSU-BM");
}

void loop()
{
}
