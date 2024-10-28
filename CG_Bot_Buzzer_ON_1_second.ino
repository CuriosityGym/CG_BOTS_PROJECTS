void setup()
{
  pinMode(10, OUTPUT);         // Set pin 10 as an output pin (buzzer is connected here)
}

void loop()
{
  digitalWrite(10, HIGH);      // Turn on the buzzer
  delay(1000);                 // Wait for 1000 milliseconds (1 second)
  
  digitalWrite(10, LOW);       // Turn off the buzzer
  delay(1000);                 // Wait for 1000 milliseconds (1 second)
}
