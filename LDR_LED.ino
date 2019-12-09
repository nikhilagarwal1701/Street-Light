void setup()
{
Serial.begin(9600);
pinMode(9,OUTPUT);
pinMode(A0,INPUT);
}

void loop()
{
int ldrreadin=analogRead(A0);
if(ldrreadin<=250)
{
  digitalWrite(9,HIGH);
}
else
{
  digitalWrite(9,LOW);
}
}
