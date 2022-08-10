#define red 11
#define green 10
#define blue 9

#define pot1 A0
#define pot2 A1
#define pot3 A2

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {

  int deger1 = analogRead(pot1);
  deger1 = map(deger1,0,1023,0,255);
  analogWrite(red,deger1);
  
  int deger2 = analogRead(pot2);
  deger2 = map(deger2,0,1023,0,255);
  analogWrite(green,deger2);

  int deger3 = analogRead(pot3);
  deger3 = map(deger3,0,1023,0,255);
  analogWrite(blue,deger3);
  
}
