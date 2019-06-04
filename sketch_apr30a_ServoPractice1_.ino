#include <Servo.h>
/* Test run for arduino motor */
Servo myservo; // Servo object to control a servo
int pos = 0; // store servo original position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 10 to servo object
}

void loop() {
 for (pos = 0; pos <= 180; pos += 1) {  // goes from 0 degrees to 180 degrees
  myservo.write(pos); //ell servo to go to position in variable 'pos'
  delay(15);// wait 15ms for servo reach position
 }
 for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
  myservo.write(pos);// tell servo to go to position in variable 'pos'
  delay(15);
 }
}
