#include <MotorDriver.h>   // Include the MotorDriver library to control motors

MotorDriver m;             // Create an instance of the MotorDriver class

void setup()
{
  
}

void loop()
{
  m.motor(1, FORWARD, 255);    // Set motor connected to M1 to move forward at maximum speed (255)
  m.motor(4, FORWARD, 255);    // Set motor connected to M4 to move forward at maximum speed (255)
  delay(5000);                 // Maintain this motion for 5000 milliseconds (5 seconds)
  
  // This loop will continuously repeat, moving both motors forward for 5 seconds each cycle
}
