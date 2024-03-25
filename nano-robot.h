#include "ServoTimer2.h"

ServoTimer2 servo1;
ServoTimer2 servo2;
ServoTimer2 servo3;
ServoTimer2 servo4;
ServoTimer2 servo5;
ServoTimer2 servo6;
int _servo1 = 11;
int _servo2 = 8;
int _servo3 = 7;
int _servo4 = 4;
int _servo5 = 3;
int _servo6 = 2;

void servo_run(uint8_t servo_ch, int16_t angle)
{
  angle = map(angle,0,180,750,2250);
  if (servo_ch == 1)
  {
    if (angle == -1)
    {
      servo1.detach();
    }
    else
    {
      if (!(servo1.attached()))
      {
        servo1.attach(_servo1);
      }
      servo1.write(angle);
    }
  }
  if (servo_ch == 2)
  {
    if (angle == -1)
    {
      servo2.detach();
    }
    else
    {
      if (!(servo2.attached()))
      {
        servo2.attach(_servo2);
      }
      servo2.write(angle);
    }
  }
  if (servo_ch == 3)
  {
    if (angle == -1)
    {
      servo3.detach();
    }
    else
    {
      if (!(servo3.attached()))
      {
        servo3.attach(_servo3);
      }
      servo3.write(angle);
    }
  }
  if (servo_ch == 4)
  {
    if (angle == -1)
    {
      servo4.detach();
    }
    else
    {
      if (!(servo4.attached()))
      {
        servo4.attach(_servo4);
      }
      servo4.write(angle);
    }
  }
}
void motor(int pin, int _Speeds) {
  int _SpeedsA;
  int _SpeedsB;
  if (pin == 1) {
    _SpeedsA = abs(_Speeds);
    _SpeedsA = _SpeedsA * 2.55;
    if (_SpeedsA > 255){_SpeedsA = 255;}
    else if (_SpeedsA < -255){_SpeedsA = -255;}

    if (_Speeds >=0) {
      analogWrite(5, 255- abs(_SpeedsA));
      analogWrite(6, 255);
    }
    else if (_Speeds <0) {
      analogWrite(5, 255);
      analogWrite(6, 255- abs(_SpeedsA));
    }
  }
  if (pin == 2) {
    _SpeedsB = abs(_Speeds);
    
    _SpeedsB = _SpeedsB * 2.55;
    if (_SpeedsB > 255){_SpeedsB = 255;}
    else if (_SpeedsB < -255){_SpeedsB = -255;}

    if (_Speeds >=0) {
      analogWrite(9, 255- abs(_SpeedsB));
      analogWrite(10, 255);
    }
    else if (_Speeds<0) {
      analogWrite(9, 255);
      analogWrite(10, 255- abs(_SpeedsB));
    }
  }
}
