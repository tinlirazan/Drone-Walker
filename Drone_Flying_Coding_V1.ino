#include <Servo.h>

const int motor1Pin = 2;
const int motor2Pin = 3;
const int motor3Pin = 4;
const int motor4Pin = 5;

const int minSpeed = 1000;
const int maxSpeed = 2000;

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

void initializeMotors() {
  motor1.attach(motor1Pin);
  motor2.attach(motor2Pin);
  motor3.attach(motor3Pin);
  motor4.attach(motor4Pin);

  motor1.writeMicroseconds(minSpeed);
  motor2.writeMicroseconds(minSpeed);
  motor3.writeMicroseconds(minSpeed);
  motor4.writeMicroseconds(minSpeed);
}

void setup() {
  Serial.begin(9600);

  initializeMotors();

}

void loop() {
  //
  spinMotors(maxSpeed);

  delay(2000);

  stopMotors();
}

void spinMotors(int speed) {
  motor1.writeMicroseconds(speed);
  motor2.writeMicroseconds(speed);
  motor3.writeMicroseconds(speed);
  motor4.writeMicroseconds(speed);
}

void stopMotors() {
  motor1.writeMicroseconds(minSpeed);
  motor2.writeMicroseconds(minSpeed);
  motor3.writeMicroseconds(minSpeed);
  motor4.writeMicroseconds(minSpeed);
}