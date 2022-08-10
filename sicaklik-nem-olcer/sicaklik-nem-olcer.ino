#include <LiquidCrystal_I2C.h>
#include<DHT.h>
#include <Wire.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

LiquidCrystal_I2C lcd(0x27,16,2);


void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("sicaklik olcum projesi: ");
  delay(500);
  dht.begin();

}

void loop() {
  int temp = dht.readTemperature();
  int hum = dht.readHumidity();

  lcd.setCursor(0,0);
  lcd.print("sicaklik: ");
  lcd.print(temp);
  lcd.print(" C  ");

  lcd.setCursor(0,1);
  lcd.print("nem: %");
  lcd.print(hum);

  delay(2000);  

 
}
