const int red = 8;
const int green = 9;
const int blue = 10;
const int sure = 2000;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  digitalWrite(red,LOW);
  delay(sure);
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  delay(sure);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
  delay(sure);
  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  delay(sure);
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);
}
