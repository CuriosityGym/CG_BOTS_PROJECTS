int noteDuration;      // Initialize variable to hold the duration of each note

void setup()
{
  pinMode(A4, OUTPUT);  // Set pin A4 as an output for the buzzer connection
}

void loop()
{
  noteDuration = 1000 / 8;       // Set note duration to an eighth note (1000ms divided by 8)

  tone(A4, 196);                 // Play a note at 196 Hz frequency on the buzzer
  delay(noteDuration);           // Wait for the note to complete its duration
  delay(noteDuration * 1.6);     // Additional pause after the note, for rhythm

  noteDuration = 1000 / 8;       // Set note duration again to an eighth note

  tone(A4, 196);                 // Play the same note at 196 Hz again
  delay(noteDuration);           // Wait for the note duration
  delay(noteDuration * 1.6);     // Additional pause for rhythm

  noteDuration = 1000 / 4;       // Set note duration to a quarter note (1000ms divided by 4)

  tone(A4, 220);                 // Play a note at 220 Hz
  delay(noteDuration);           // Wait for the note duration
  delay(noteDuration * 1.6);     // Additional pause for rhythm

  noteDuration = 1000 / 4;       // Set note duration to a quarter note

  tone(A4, 196);                 // Play a note at 196 Hz
  delay(noteDuration);           // Wait for the note duration
  delay(noteDuration * 1.6);     // Additional pause for rhythm

  noteDuration = 1000 / 4;       // Set note duration to a quarter note

  tone(A4, 262);                 // Play a note at 262 Hz
  delay(noteDuration);           // Wait for the note duration
  delay(noteDuration * 1.6);     // Additional pause for rhythm

  noteDuration = 1000 / 2;       // Set note duration to a half note (1000ms divided by 2)

  tone(A4, 247);                 // Play a note at 247 Hz
  delay(noteDuration);           // Wait for the note duration
  delay(noteDuration * 1.6);     // Additional pause for rhythm

  noteDuration = 1000 / 8;       // Set note duration back to an eighth note

  tone(A4, 196);                 // Play the final note at 196 Hz
  delay(noteDuration);           // Wait for the note duration

  // Loop will repeat, playing the sequence again
}
