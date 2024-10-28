#include <MotorDriver.h>  // Include the motor driver library

MotorDriver m;  // Create a MotorDriver object

void setup()
{

}

void loop()
{
  m.motor(1, FORWARD, 255);  // Set motor on port 1 to move forward at full speed (255)
  m.motor(4, BACKWARD, 0);    // Set motor on port 4 to stop (backward speed is 0) for a pivot turn
  delay(200);  // Delay for 200 milliseconds to maintain the pivot turn duration
}
