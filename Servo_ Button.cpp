#include <Servo.h>
int ledPin = 7;
int counter = 0;
Servo myServo;
int buttonState = 0;
int buttonPin = 2;
int led = 13;

void setup() {
 Serial.begin(9600);
 myServo.attach(10);
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT);
}

void loop() {
 buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);
 if(buttonState == HIGH) {
  digitalWrite(led, HIGH);
  digitalWrite(ledPin, HIGH);
  myServo.write(170);
  delay(1000);
  digitalWrite(led, LOW);
  digitalWrite(ledPin, LOW);
  myServo.write(90);
  delay(1000);
 }  
}