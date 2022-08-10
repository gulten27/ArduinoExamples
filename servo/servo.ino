
int servo = 3;
void setup(){
  pinMode(servo,OUTPUT);
}

void loop(){
  for(int i=0; i<180; i=i+5){
    int deger = map(i,0,180,0,255);
    analogWrite(servo,deger);
    delay(20);
  }

  for(int i=180; i>0; i=i-5){
    int deger = map(i,0,180,0,255);
    analogWrite(servo,deger);
    delay(20);
  }
}
