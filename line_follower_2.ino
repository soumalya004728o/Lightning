void setup() {
  // put your setup code here, to run once:
pinMode(13,INPUT);
pinMode(12,INPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if((digitalRead(12)==LOW)&&(digitalRead(13)==LOW))//forward movement
{
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,110);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
analogWrite(9,110);
}
 if((digitalRead(12)==HIGH)&&(digitalRead(13)==LOW))//12 left and 13 right
 { 
 
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  analogWrite(6,80);
  digitalWrite(7,HIGH);      //left rotate
  digitalWrite(8,LOW);
  analogWrite(9,60);
 }
 if((digitalRead(12)==LOW)&&(digitalRead(13)==HIGH))
{
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,60);       //right rotate
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
 analogWrite(9,80);
}
if(digitalRead(12)==HIGH && digitalRead(13)== HIGH)
{
    digitalWrite(4,LOW);//stop movement
  digitalWrite(5,LOW);
  analogWrite(6,0);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  analogWrite(9,0);
}
 
}
