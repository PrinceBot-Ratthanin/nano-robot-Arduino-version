#include <nano-robot.h>
void setup() {
  Serial.begin(9600);
  wait_SW1();                   //รอจนกว่าจะกด SW1
}

void loop() {
  Serial.print("SW1 status :");
  Serial.println(digitalRead(12));
  delay(100);
}
