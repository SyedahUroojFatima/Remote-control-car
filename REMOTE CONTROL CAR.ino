#include <Adafruit_10DOF.h>

#include <AFMotor.h>
AF_DCMotor motor1((1,motor12_1KHZ)  
AF_DCMotor motor1((2,motor12_1KHZ)  
AF_DCMotor motor1((3,motor23_1KHZ)  
AF_DCMotor motor1((4,motor34_1KHZ) 
char commands; 

void setup() {
Serial.begin(9600);
}
void loop() {
  if(Serial.available()>0)
  {
    command=Serial.read();
    Stop();
    switch(command)
    {
      case 'F':
      forward();
      break;
      case 'B':
      break;
      back();
      case 'L':
      left();
      break;
      case'r':
      right();
      break;
      
    }
  }
}
void forward()
{motor1.setSpeed(255);
motor1.run(FORWARD);
}
void forward()
{
  
motor1.setSpeed(255);
motor1.run(FORWARD);
motor2.setSpeed(255);
motor2.run(FORWARD);
motor3.setSpeed(255);
motor3.run(FORWARD);
motor4.setSpeed(255);
motor4.run(FORWARD);
}

void backward()
{
motor1.setSpeed(255);
motor1.run(BACKWARD);
motor2.setSpeed(255);
motor2.run(BACKWARD);
motor3.setSpeed(255);
motor3.run(BACKWARD);
motor4.setSpeed(255);
motor4.run(BACKWARD);
}

void right()
{
motor1.setSpeed(255);
motor1.run(RIGHT);
motor2.setSpeed(255);
motor2.run(RIGHT);
motor3.setSpeed(255);
motor3.run(RIGHT);
motor4.setSpeed(255);
motor4.run(RIGHT);
}

void left()
{
motor1.setSpeed(255);
motor1.run(LEFT);
motor2.setSpeed(255);
motor2.run(LEFT); 
motor3.setSpeed(255);
motor3.run(LEFT);
motor4.setSpeed(255);
motor4.run(LEFT);
}
void stop()
{
  motor1.setSpeed(255);
}
motor1.run(STOP);
motor2.setSpeed(255);
motor2.run(STOP);
motor3.setSpeed(255);
motor3.run(STOP);
motor4.setSpeed(255);
motor4.run(STOP);
}
