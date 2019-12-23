void setup() {
  // put your setup code here, to run once:
pinMode(13,INPUT);
pinMode(12,INPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if((digitalRead(12)==HIGH)&&(digitalRead(13)==HIGH))//forward movement
{
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
else if((digitalRead(12)==LOW)&&(digitalRead(13)==HIGH))//12 left and 13 right
 { 
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,HIGH);      //left rotate
  digitalWrite(8,LOW);
 }
 else if((digitalRead(12)==HIGH)&&(digitalRead(13)==LOW))
{
digitalWrite(4,HIGH);
digitalWrite(5,LOW);      //right rotate
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
else
{
  digitalWrite(4,LOW);//stop movement
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
 
}
