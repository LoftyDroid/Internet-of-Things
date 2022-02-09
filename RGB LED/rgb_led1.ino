// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  analogWrite(11,0);
  analogWrite(10,0);
  analogWrite(9,250);
  delay(2000);
  analogWrite(11,0);
  analogWrite(10,250);
  analogWrite(9,0);
  delay(2000);
  analogWrite(11,250);
  analogWrite(10,0);
  analogWrite(9,0);
  delay(2000);
  analogWrite(11,250);
  analogWrite(10,0);
  analogWrite(9,250);
  delay(2000);
  
 }



  