int BUTTONstate = 0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  BUTTONstate = digitalRead(7);
  if (BUTTONstate == HIGH) 
  {
    digitalWrite(13, HIGH);
  } 
  else 
  {
    digitalWrite(13, LOW);
  }
    delay(100);
}