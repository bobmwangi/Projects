void setup()
{
 Serial.begin(9600); 
 delay(5000);
 Serial.println("P0");
 delay(500);
}

void loop()
{
  Serial.println("G450");
  delay(1000);
  Serial.println("G0");
  delay(4000);
  Serial.println("G450");
  delay(100);
  Serial.println("G0");
  delay(4000);
}
