#include <Servo.h>

Servo myservo;  // 定义Servo对象来控制
int pos = 0;    // 角度存储变量
int pos_target = 90;
int pinNum = D4;

void setup() {
  myservo.attach(pinNum);  // 控制线连接数字D4
}

void loop() {
  myservo.write(pos_target); 
  delay(1000);
  myservo.write(0); 
  delay(500);
  myservo.detach(); 
  delay(1*60*1000);
  myservo.attach(pinNum);      
}

  
