int veri;
int kirmiziPin = 9 ;
int yesilPin = 10;
int maviPin = 11;
int x = 8;

void setup() {
  Serial.begin(9600);
  pinMode(kirmiziPin, OUTPUT);
  pinMode(yesilPin, OUTPUT);
  pinMode(maviPin, OUTPUT);

}

void loop() {
  if(Serial.available()){
    veri = Serial.read();
  }


  if(veri == 'k'){
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(yesilPin,HIGH);
    digitalWrite(maviPin,HIGH);
  }
  else if(veri == 'y'){
    digitalWrite(kirmiziPin,HIGH);
    digitalWrite(yesilPin,LOW);
    digitalWrite(maviPin,HIGH);
  }
  else if(veri == 'm'){
    digitalWrite(kirmiziPin,HIGH);
    digitalWrite(yesilPin,HIGH);
    digitalWrite(maviPin,LOW);
  }
  else{
    digitalWrite(kirmiziPin,HIGH);
    digitalWrite(yesilPin,HIGH);
    digitalWrite(maviPin,HIGH);
  }
  

}
