#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
  servo1.attach(9); // Attaches the servo on pin 9 to the servo object
  servo2.attach(10); // Attaches the servo on pin 10 to the servo object
}

void loop() {
  moveServo(servo1, 0, 90);  // Move servo1 from 0 to 90 degrees
  delay(500);  // Add a delay for 500 ms before moving to the next servo
  moveServo(servo1, 90, 0);  // Move servo1 from 90 to 0 degrees

  delay(500);  // Add a delay for 500 ms before moving to the next servo
  moveServo(servo2, 0, 90);  // Move servo2 from 0 to 90 degrees
  delay(500);  // Add a delay for 500 ms before moving to the next servo
  moveServo(servo2, 90, 0);  // Move servo2 from 90 to 0 degrees
}

void moveServo(Servo &servo, int start, int end) {
  int step = (start < end) ? 1 : -1;  // Determine whether to increment or decrement the position
  for (int pos = start; pos != end; pos += step) {
    servo.write(pos);  // Tell the servo to go to the position in the variable 'pos'
    delay(15);  // Waits 15ms for the servo to reach the position
  }
  servo.write(end);  // Make sure the servo reaches the exact final position
}