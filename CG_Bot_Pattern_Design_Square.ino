#include <MotorDriver.h>                  // Motor driver library
int i;                                                   // ‘i’ variable
MotorDriver m;
void setup()
{
}
void loop()
{
  for (i = 1; i <= 4; i++) {                    // loop repeat till four times. 
    m.motor(1,FORWARD,255);       //Move forward 
    m.motor(4,FORWARD,255);
    delay(2000);
    m.motor(1,BACKWARD,255);     // Take 90 degree turn
    m.motor(4,FORWARD,255);
    delay(350);
  }

}
