int esikdeger = 400;
int buzzerPin = 9;
int deger;

void setup() {
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  deger = analogRead(A0);

  if(deger > esikdeger){
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(buzzerPin,LOW);
    delay(100);
  }else{
    digitalWrite(buzzerPin,LOW);
  }

}
