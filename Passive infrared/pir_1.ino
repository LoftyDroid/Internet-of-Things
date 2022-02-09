int led = 13;
int sensor = 2;
int buzzerPin = 9;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorval = digitalRead(sensor);
  Serial.println(sensorval);
  
  if(sensorval == HIGH) {
    digitalWrite(led, HIGH);
    tone(buzzerPin, 50);
    delay(100);
 }
  else {
    digitalWrite(led, LOW);
    noTone(buzzerPin);
    delay(100);
  }
}