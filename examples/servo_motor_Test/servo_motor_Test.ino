#include <nano-robot.h>
void setup() {
  
  

}

void loop() {
  servo_run(1,0);   //D11
  servo_run(2,0);   //D8
  delay(1000);
  servo_run(1,90);   //D11
  servo_run(2,90);   //D8
  delay(1000);
  servo_run(1,180);   //D11
  servo_run(2,180);   //D8
  delay(1000);

}
