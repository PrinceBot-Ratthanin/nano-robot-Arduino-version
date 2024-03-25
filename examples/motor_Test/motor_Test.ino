#include <nano-robot.h>
void setup() {
  wait_SW1();         // wait until sw1 press 
  

}

void loop() {
  motor(1,0);   
  motor(2,0);   
  delay(1000);
  motor(1,50);   
  motor(2,50);  
  delay(1000);
  motor(1,100); 
  motor(2,100); 
  delay(1000);

}
