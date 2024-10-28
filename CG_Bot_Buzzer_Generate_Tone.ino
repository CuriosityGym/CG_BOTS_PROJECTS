void setup()
{
  pinMode(A4, OUTPUT);       // Set pin A4 as output mode (buzzer is connected here)
}

void loop()
{
  tone(A4, 440);             // Play a sound at 440 Hz frequency (produces a standard A4 pitch)
  delay(1000);               // Play the sound for 1000 milliseconds (1 second)
  
  tone(A4, 240);             // Change frequency to 240 Hz for a different pitch
  delay(500);                // Play the sound for 500 milliseconds (0.5 seconds)
  
  tone(A4, 440);             // Return to 440 Hz frequency (A4 pitch)
  delay(1000);               // Play the sound for 1000 milliseconds
  
  tone(A4, 396);             // Change frequency to 396 Hz for another pitch
  delay(500);                // Play the sound for 500 milliseconds
  
  tone(A4, 440);             // Back to 440 Hz frequency (A4 pitch)
  delay(1000);               // Play the sound for 1000 milliseconds
  
  tone(A4, 396);             // 396 Hz frequency for another pitch
  delay(500);                // Play the sound for 500 milliseconds

  noTone(A4);                // Stop any sound currently playing on pin A4
}
