#include <MotorDriver.h>  // Include the motor driver library

MotorDriver m;  // Create a MotorDriver object

void setup()
{
  // Initialization code can go here if needed
}

void loop()
{
  m.motor(1, FORWARD, 255);  // Set motor on port 1 to move forward at full speed (255) for pivot turn
  m.motor(4, BACKWARD, 0);    // Stop motor on port 4 (backward speed is 0)
  delay(200);  // Delay for 200 milliseconds 
  
  m.motor(1, FORWARD, 255);  // Move forward at full speed
  m.motor(4, FORWARD, 255);  // Move both motors forward
  delay(3000);  // Delay for 3000 milliseconds 

  m.motor(1, FORWARD, 255);  // Take a pivot turn again
  m.motor(4, BACKWARD, 0);   // Stop motor on port 4
  delay(200);  // Delay for 200 milliseconds

  m.motor(1, FORWARD, 255);  // Move forward
  m.motor(4, FORWARD, 255);  // Move both motors forward
  delay(3000);  // Delay for 3 seconds to continue moving forward

  m.motor(1, FORWARD, 255);  // Take a point turn (turn in place)
  m.motor(4, BACKWARD, 255);  // Set motor on port 4 to move backward
  delay(2000);  // Delay for 2 seconds to complete the turn

  m.motor(1, BACKWARD, 0);  // Stop motor on port 1 for a pivot turn
  m.motor(4, FORWARD, 255);  // Set motor on port 4 to move forward
  delay(150);  // Delay for 150 milliseconds

  m.motor(1, BACKWARD, 255);  // Take a differential turn (one motor backward)
  m.motor(4, FORWARD, 200);  // Move motor on port 4 forward at speed 200
  delay(1000);  // Delay for 1 second to execute the turn

  m.motor(1, FORWARD, 255);  // Move forward
  m.motor(4, FORWARD, 255);  // Move both motors forward
  delay(2000);  // Delay for 2 seconds to complete the forward movement
}
