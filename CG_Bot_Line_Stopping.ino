#include <MotorDriver.h>

MotorDriver m;

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor at 9600 baud rate
}

void loop() {
  int leftSensor = analogRead(A2);   // Read value from left sensor
  int rightSensor = analogRead(A3);  // Read value from right sensor

  // Print sensor values to Serial Monitor for debugging
  Serial.print("Left Sensor: ");
  Serial.print(leftSensor);
  Serial.print(" | Right Sensor: ");
  Serial.println(rightSensor);

  // Check if any IR value is greater than 300 (assuming 300 as threshold for white/black)
  if (leftSensor < 400 || rightSensor < 400) {
    // Both sensors are detecting a line (robot should move forward)
    Serial.println("Moving Forward");
    m.motor(1, FORWARD, 255);
    m.motor(4, FORWARD, 255);
  } else {
    // Sensors do not detect a line (robot should stop)
    Serial.println("Stopping");
    m.motor(1, BRAKE, 0);
    m.motor(4, BRAKE, 0);
  }

  delay(500); // Delay to make Serial Monitor easier to read
}
