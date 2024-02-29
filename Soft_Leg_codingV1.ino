#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
  servo1.attach(9); // attaches the servo on pin 9 to the servo object
  servo2.attach(10); // attaches the servo on pin 10 to the servo object
}

void lopp() {
  for (int pos = 0; pos <= 90; pos += 1) { // goes from 0 to 90 degrees 
  // in steps of 1 degree
  servo1.write(pos);            // tell servo to go to position in variable 
  'pos'
       delay(15);                     // waits 15ms for the servo to reach the
       postion
  }
  for (int pos = 90; pos >= 0; pos -= 1) { // goes from 90 degrees to 0 degrees
    servo1.write(pos);                // tell servo to go to postion in variable
    'pos'
    delay(15)                          // waits 15ms for the servo to reach the position
    postion
  }
