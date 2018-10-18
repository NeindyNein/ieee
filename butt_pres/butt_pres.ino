
void setup()
{
  pinMode(8, INPUT);

  digitalWrite(8, HIGH);
}
void loop()
{
    bool button1 =   !digitalRead(8);
  while(button1, HIGH)
  {
  digitalWrite(LED_BUILTIN, HIGH);
  }
}
