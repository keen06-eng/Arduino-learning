int myPin = 8;
int dit=200;
int dah=600;
int deh=400;
int brk=1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(myPin,HIGH);
  delay(dit);
  digitalWrite(myPin,LOW);
  delay(dit);

  digitalWrite(myPin,HIGH);
  delay(dit);
  digitalWrite(myPin,LOW);
  delay(dit);

  digitalWrite(myPin,HIGH);
  delay(dit);
  digitalWrite(myPin,LOW);
  delay(dit);

  delay(brk);
   
  digitalWrite(myPin,HIGH);
  delay(dah);
  digitalWrite(myPin,LOW);
  delay(deh);

  digitalWrite(myPin,HIGH);
  delay(dah);
  digitalWrite(myPin,LOW);
  delay(deh);

  digitalWrite(myPin,HIGH);
  delay(dah);
  digitalWrite(myPin,LOW);
  delay(deh);

  delay(brk);

  digitalWrite(myPin,HIGH);
  delay(dit);
  digitalWrite(myPin,LOW);
  delay(dit);

  digitalWrite(myPin,HIGH);
  delay(dit);
  digitalWrite(myPin,LOW);
  delay(dit);

  digitalWrite(myPin,HIGH);
  delay(dit);
  digitalWrite(myPin,LOW);
  delay(dit);
}
