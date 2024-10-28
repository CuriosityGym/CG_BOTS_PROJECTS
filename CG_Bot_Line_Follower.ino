#include <MotorDriver.h>  // Including motor driver library

int Left;   // Declaring Left IR sensor variable
int Right;  // Declaring Right IR sensor variable

MotorDriver m;

void setup() {
  pinMode(A2, INPUT);    // Left IR sensor connected to A2
  pinMode(A3, INPUT);    // Right IR sensor connected to A3
  Serial.begin(9600);    // Initialize Serial Monitor to view outputs
}

void loop() {
  // Read sensor values
  Left = digitalRead(A2);     // Store Left IR sensor reading in Left variable
  Right = digitalRead(A3);    // Store Right IR sensor reading in Right variable

  // Print sensor readings to Serial Monitor
  Serial.print("Left Sensor: ");
  Serial.print(Left);
  Serial.print(" | Right Sensor: ");
  Serial.println(Right);

  // Movement logic based on sensor input
  if (Left && Right) { // Both sensors detect black, move forward
    Serial.println("Action: Moving Forward");
    m.motor(1, FORWARD, 255);   // Move forward at speed 255
    m.motor(4, FORWARD, 255);
    
  } else if (!Left && Right) { // Left detects white, Right detects black, turn right
    Serial.println("Action: Turning Right");
    m.motor(1, BACKWARD, 255);  // Turn right by running motors in opposite directions
    m.motor(4, FORWARD, 255);
    
  } else if (Left && !Right) { // Left detects black, Right detects white, turn left
    Serial.println("Action: Turning Left");
    m.motor(1, FORWARD, 255);   // Turn left by running motors in opposite directions
    m.motor(4, BACKWARD, 255);
    
  } else if (!Left && !Right) { // Both sensors detect white, stop
    Serial.println("Action: Stopping");
    m.motor(1, BRAKE, 0);       // Stop both motors
    m.motor(4, BRAKE, 0);
  }

  // Add a small delay to improve readability in Serial Monitor
  delay(500);
}
