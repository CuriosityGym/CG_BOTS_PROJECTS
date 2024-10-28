#include <MotorDriver.h>  // Include the motor driver library

int i;  // Declare an integer variable 'i' for loop counting

MotorDriver m;  // Create a MotorDriver object

void setup()
{
 
}

void loop()
{
  for (i = 1; i <= 3; i++) {  // Loop runs three times
    m.motor(1, FORWARD, 255);  // Move motor on port 1 forward at full speed (255)
    m.motor(4, FORWARD, 255);  // Move motor on port 4 forward at full speed (255)
    delay(1000);  // Delay for 1 second; duration may depend on battery voltage

    m.motor(1, FORWARD, 150);  // Start a left turn by reducing speed of motor on port 1
    m.motor(4, BACKWARD, 150);  // Reverse motor on port 4 to create a turn
    delay(100);  // Delay for 100 milliseconds to complete the turn
  }

  m.motor(1, BRAKE, 0);  // Apply brake to motor on port 1
  m.motor(4, BRAKE, 0);  // Apply brake to motor on port 4
  delay(5000);  // Wait for 5 seconds with brakes applied
}
