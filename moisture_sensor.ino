int moistureSensor = 5;
int moistureVal = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    int sa = Serial.available();
    moistureVal = analogRead(moistureSensor);
    Serial.println(moistureVal);
    if (sa != Serial.available())
    {
      clearBuffer();
    }
    //clearBuffer();
  }
}

void clearBuffer()
{
  while (Serial.available() > 0)
  {
    Serial.read();
  }
}
