#include <Servo.h>
#include <SPI.h>

  Servo Elb;
  Servo Shldr;
  Servo Wrist;
  Servo Base;
  Servo Gripper;


void setup()
{
  Serial.begin(9600);
  
  Base.attach(2);
  Shldr.attach(3);
  Elb.attach(4);
  Wrist.attach(5);
  Gripper.attach(6);
  
}

void loop()
{

  
}
