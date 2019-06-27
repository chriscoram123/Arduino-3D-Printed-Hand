#include <LiquidCrystal.h>
#include <Servo.h>

LiquidCrystal lcd(4, 11, 13, 9, 8, 6);

int potPin1 = A1;
int potPin2 = A2;

int ledPin = 7;
int counter = 0;

Servo myServo;
Servo myServo2;
Servo myServo3;

int buttonState = 0;
int buttonPin = 2;
int led = 13;

void setup() {
 Serial.begin(9600);
 myServo.attach(10);
 myServo2.attach(5);
 myServo3.attach(4);
 
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT);

 lcd.begin(16, 2);
 lcd.clear();

 pinMode(potPin1, INPUT);
 pinMode(potPin2, INPUT);
}

void loop() {
  
 buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);
 
if(buttonState == HIGH) {
digitalWrite(led, HIGH);
digitalWrite(ledPin, HIGH);
  myServo.write(170);
  myServo2.write(170);
  myServo3.write(170);
  delay(1000);

  
 digitalWrite(led, LOW);
 digitalWrite(ledPin, LOW);
  myServo.write(90);
  myServo2.write(90);
  myServo3.write(90);
  lcd.print("Testing 2");
  delay(1000);
 }  
}
