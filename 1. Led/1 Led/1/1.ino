#define red 13
void setup()
{
  pinMode(red, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000); 
  digitalWrite(red, LOW);
  delay(1000);
}
