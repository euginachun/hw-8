int sensorValue = 0;
int sensorPin = A0;

void setup()                    
{
 
  pinMode(11, OUTPUT);      
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()                      
{ sensorValue = analogRead(sensorPin);

  if (sensorValue == 1023)
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    sensorValue = analogRead(sensorPin)
} else if (sensorValue <= 255) {
    digitalWrite(11, HIGH);
    sensorValue = analogRead(sensorPin)
}else if (sensorValue <= 511) {
    digitalWrite(12, HIGH);
    sensorValue = analogRead(sensorPin)
}else if (sensorValue <= 767) {
    digitalWrite(13, HIGH);
    sensorValue = analogRead(sensorPin)
}
