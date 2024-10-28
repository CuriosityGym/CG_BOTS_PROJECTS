#include <MotorDriver.h>
MotorDriver m;
void setup()
{}
void loop()
{
  m.motor(1,FORWARD,255); 
   //Move Straight for the 60 cm.
  m.motor(4,FORWARD,255);
  delay(3000); //Delay of the time for the bot to trace 60cm.
  m.motor(1,BACKWARD,255); //Turn right for 90°
  m.motor(4,FORWARD,255);
  delay(250); //Delay of the time for the bot to take 90°
  m.motor(1,FORWARD,255); //Move Straight for the 60 cm
  m.motor(4,FORWARD,255);
  delay(3000); //Delay of the time for the bot to trace 60cm
  m.motor(1,BRAKE,0);  //Stop the bot.
  m.motor(4,BRAKE,0);
  delay(4000);  //Big delay
}
