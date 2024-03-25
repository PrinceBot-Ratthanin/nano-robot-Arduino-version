#include <nano-robot.h>
void setup() {
  Serial.begin(9600);     //ตั้งค่าความเร็วในการส่งข้อมูลมายังคอม

}

void loop() {
  Serial.print("A0=");
  Serial.print(analogRead(A0));
  Serial.print("  A1=");
  Serial.print(analogRead(A1));
  Serial.print("A2=");
  Serial.print(analogRead(A2));
  Serial.print("  A3=");
  Serial.print(analogRead(A3));
  Serial.print("A4=");
  Serial.print(analogRead(A4));
  Serial.print("  A5=");
  Serial.print(analogRead(A5));
  Serial.print("  A7=");
  Serial.println(analogRead(A7));

  delay(100);

}
