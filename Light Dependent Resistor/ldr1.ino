
int relay = 6;
int sensor = A1;
int sensorReadind = 0;
void setup()
{
  pinMode(relay, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);        
}

void loop()
{
 int sensorReading = analogRead(A1);
  if (sensorReading<=400)
     {
       digitalWrite(relay, HIGH);
       Serial.println("Its Dark, Turn on the Bulb : \n");
       Serial.println(sensorReading);
       delay(1000);
  }
  else
  {
    digitalWrite(relay, LOW);
    Serial.println("Its Bright, Turn off the Bulb : \n");
    Serial.println(sensorReading);
    delay(1000);
  }
}