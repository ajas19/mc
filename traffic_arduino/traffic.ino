  int green1 =11;
  int yellow1= 12;
  int red1 =13;
  int green2 =10;
  int yellow2= 9;
  int red2 =8;

void setup() {
    pinMode(green1,OUTPUT);
    pinMode(yellow1,OUTPUT);
    pinMode(red1,OUTPUT);
    pinMode(green2,OUTPUT);
    pinMode(yellow2,OUTPUT);
    pinMode(red2,OUTPUT);

}

void loop() {
  digitalWrite(red1,HIGH);
  digitalWrite(green2,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(red2,LOW);

  delay(1000);

  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  digitalWrite(red1,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(red2,LOW);

  delay(1000);

  digitalWrite(green1,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(red1,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(green2,LOW);

  delay(1000);




}
