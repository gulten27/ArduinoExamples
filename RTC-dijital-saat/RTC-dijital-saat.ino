#include <virtuabotixRTC.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int CLK_PIN = 6;
int DATA_PIN = 7;
int RST_PIN = 8;

virtuabotixRTC RTC(CLK_PIN, DATA_PIN, RST_PIN);

void setup() {

  lcd.init();
  lcd.backlight();

  Serial.begin(9600);
  RTC.setDS1302Time(10,17,17,5,5,8,2022);
}

void loop() {

  RTC.updateTime();
/*
  Serial.print("Tarih / Saat: ");
  Serial.print(RTC.dayofmonth);
  Serial.print("/");
  Serial.print(RTC.month);
  Serial.print("/");
  Serial.print(RTC.year);
  Serial.print(" ");
  Serial.print(RTC.hours);
  Serial.print(":");
  Serial.print(RTC.minutes);
  Serial.print(":");
  Serial.println(RTC.seconds);
*/

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(RTC.dayofmonth);
  lcd.print("/");
  lcd.print(RTC.month);
  lcd.print("/");
  lcd.print(RTC.year);

  lcd.setCursor(0,1);

  lcd.print(RTC.hours);
  lcd.print(":");
  lcd.print(RTC.minutes);
  lcd.print(":");
  lcd.print(RTC.seconds);
  
  delay(1000);
}
