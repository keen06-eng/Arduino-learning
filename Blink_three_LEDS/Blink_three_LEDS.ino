void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<5;i++){
    digitalWrite(2,HIGH);
    delay(700);
    digitalWrite(2,LOW);
    delay(300);
  }
  for(int i=0;i<10;i++){
    digitalWrite(3,HIGH);
    delay(700);
    digitalWrite(3,LOW);
    delay(300);
  }
  for(int i=0;i<15;i++){
    digitalWrite(4,HIGH);
    delay(700);
    digitalWrite(4,LOW);
    delay(300);
  }
}
