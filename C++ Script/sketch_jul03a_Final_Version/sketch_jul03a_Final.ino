#include <TFT.h>
#include <SPI.h>
#include <Servo.h>
#include <LiquidCrystal.h>
/*
 * Final Program For Bionic Prosthetic Prototype One
 * @ Christopher Sean Coram
 * July - 3 - 2019
 */
// LCD variables...
  LiquidCrystal lcd(4, 11, 13, 9, 8, 6); // pin numbers for dispplay
  int pPin1 = A1;
  int pPin2 = A2;
  
// LED Variables...
  int ledPin = 7;
  int counter = 0;
  
// Servo Motor Variables...
  Servo myServo;
  Servo myServoTwo;
  Servo myServoThree;
  
// Button State Variables...
 // ButtonState activity will remain 0 until buttonPin PWM changes state.
  int buttonState = 0;
  int buttonPin = 2;
  int led = 13; // Pin value for led that will interact with buttonPin when buttonState changes state.
  
// Ultrasonic Variables...
  const int trigPin = 9; // Sonic wavelength that will be ejected from sensor.
  const int echoPin = 8; // Sonic wavelength that will be recieved by sensor.
  long duration; // Total amount of time of sensor operating.
  int distance; // Total distance that wavelengths travel.


void setup() {
// Servo Motor Setup...
  Serial.begin(9600); // 9600 bits per second.
  // Pin numbers attached to servos.
  myServo.attach(10); 
  myServoTwo.attach(5);
  myServo.attach(4);
  
// led Inputs / Outputs...
  pinMode(ledPin, OUTPUT); // Sets ledPin as the reaction for changing button state.
  pinMode(buttonPin, INPUT); // Sets buttonPin as INPUT action.

// liquid Crystal Display Setup...
  lcd.begin(16,3); 
  lcd.clear();
  pinMode(pPin1, INPUT);
  pinMode(pPin2, INPUT);

// Ultrasonic Sensor Setup...
  pinMode(trigPin, OUTPUT); // Sets trigPin as OUTPUT .
  pinMode(echoPin, INPUT): // Sets echoPin as INPUT.
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:

}
