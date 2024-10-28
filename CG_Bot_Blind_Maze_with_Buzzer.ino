#include <MotorDriver.h> // Include the MotorDriver library to control motors

MotorDriver m; // Create an instance of the MotorDriver class

void setup()
{
  pinMode(10, OUTPUT); // Set pin 10 as output mode (used to control a buzzer )
}

void loop()
{
  // Turn on the buzzer/ for 500 milliseconds
  digitalWrite(10, HIGH);
  delay(500);
  
  // Turn off the buzzer/ for 500 milliseconds
  digitalWrite(10, LOW);
  delay(500);

  // Repeat the on-off pattern for the buzzer/
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);

  // Move both motors forward at maximum speed (255) for 3 seconds
  m.motor(1, FORWARD, 255);
  m.motor(4, FORWARD, 255);
  delay(3000);

  // Stop both motors by setting them to BRAKE mode
  m.motor(1, BRAKE, 0);
  m.motor(4, BRAKE, 0);

  // Turn on the buzzer/ for 1 second
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW); // Turn off the buzzer/

  // Make a differential turn by setting one motor backward and the other forward for 250 milliseconds
  m.motor(1, BACKWARD, 255);
  m.motor(4, FORWARD, 255);
  delay(250);

  // Stop both motors again
  m.motor(1, BRAKE, 0);
  m.motor(4, BRAKE, 0);

  // Turn on the buzzer/ for 1 second
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW); // Turn off the buzzer/

  // Move both motors forward again at maximum speed for 3 seconds
  m.motor(1, FORWARD, 255);
  m.motor(4, FORWARD, 255);
  delay(3000);

  // Stop both motors again
  m.motor(1, BRAKE, 0);
  m.motor(4, BRAKE, 0);

  // Create an on-off blink pattern on the buzzer/
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);

  // Long delay to prevent loop from repeating immediately (wait for about 100 seconds)
  delay(100000);
}
