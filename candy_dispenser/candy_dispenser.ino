#include "src/esp32_servo/Servo.h"

#define PIN1 16
#define PIN2 17
#define PIN3 5
#define PIN4 18

#define SERVO1 19
#define SERVO2 23
#define SERVO3 32
#define SERVO4 33

Servo servos[4];

void setup() {
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);

  pinMode(SERVO1, OUTPUT);

  servos[0].attach(SERVO1);
  servos[1].attach(SERVO2);
  servos[2].attach(SERVO3);
  servos[3].attach(SERVO4);
  
}

void loop() {
//  for(int a = 0;a < 4; a++) {
//    runMotor(a);
//    delay(5);
//  }

//  for (int a = 0; a < 180; a++) {
//    for (int b = 0; b < 4; b++) {
//      servos[b].write(a);
//    }
//    delay(15);
//  }
}


void runMotor(int index) {
  digitalWrite(PIN1, index == 0 ? HIGH : LOW);
  digitalWrite(PIN2, index == 1 ? HIGH : LOW);
  digitalWrite(PIN3, index == 2 ? HIGH : LOW);
  digitalWrite(PIN4, index == 3 ? HIGH : LOW);
}

