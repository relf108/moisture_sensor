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

    moistureVal = analogRead(moistureSensor);

    //# to indicate start of val
    Serial.print("#");
    Serial.print(moistureVal);
    Serial.print("\n");
    clearBuffer();
  }
}

void clearBuffer()
{
  while (Serial.available() > 0)
  {
    Serial.read();
  }
}
