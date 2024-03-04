Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(9); // Attach servo1 to pin 9
  servo2.attach(10); // Attach servo2 to pin 10
  servo3.attach(11); // Attach servo3 to pin 11
  servo4.attach(12); // Attach servo4 to pin 12
}

void loop() {
  // Move servo1 from 0 to 90 degrees
  moveServo(servo1, 0, 90);
  delay(500); // Add a delay before moving to the next servo

  // Move servo1 from 90 to 0 degrees
  moveServo(servo1, 90, 0);
  delay(500); // Add a delay before moving to the next servo

  // Move servo2 from 90 to 0 degrees
  moveServo(servo2, 90, 0);
  delay(500);
  
  // Move servo2 from 0 to 90 degrees
  moveServo(servo2, 0, 90);
  delay(500);
  
  // Move servo3 from 0 to 90 degrees
  moveServo(servo3, 0, 90);
  delay(500);
  
  // Move servo3 from 90 to 0 degrees
  moveServo(servo3, 90, 0);
  delay(500);
  
  // Move servo4 from 0 to 90 degrees
  moveServo(servo4, 0, 90);
  delay(500);
  
  // Move servo4 from 90 to 0 degrees
  moveServo(servo4, 90, 0);
  delay(500);
}

void moveServo(Servo &servo, int start, int end) {
  int step = (start < end) ? 1 : -1; 
  for (int pos = start; pos != end; pos += step) {
    servo.write(pos); 
    delay(15); 
  }
  servo.write(end); 
}
