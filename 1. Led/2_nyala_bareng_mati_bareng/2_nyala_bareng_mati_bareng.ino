#define led1 2
#define led2 6
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(500);
}

//https://www.tinkercad.com/things/1jYD3jNt3IA-copy-of-led-kereta-api/editel?tenant=circuits
