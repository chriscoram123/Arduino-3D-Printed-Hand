#include <LiquidCrystal.h>
#include <Servo.h>

// LCD Varaibles
LiquidCrystal lcd(4, 11, 13, 9, 8, 6);
int potPin1 = A1;
int potPin2 = A2;

// LED Variables
int ledPin = 7;
int counter = 0;

// Servo Variables
Servo myServo;
Servo myServo2;
Servo myServo3;

// Button State Variables
int buttonState = 0;
int buttonPin = 2;
int led = 13;

// LCD, SPI Variables
const int trigPin = 9;
const int echoPin = 8;
// Defined Variables
long duration;
int distance;

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

 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 Serial.begin(9600);
}


void loop(){
 buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);
 
 // Sets trigPin on HIGH for 10 micro seconds
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);

 // duration variable
 duration == pulseIn(echoPin, HIGH

if(buttonState == HIGH) {
  // Clears trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

  //  Sets led to HIGH
digitalWrite(led, HIGH);
digitalWrite(ledPin, HIGH);
  lcd.print("Testing 1");
  // SET ONE:
  // Sets trigPin to HIGH
  digitalWrite(trigPin, HIGH)
  delayMicroseconds(10);
  myServo.write(170);
  digitalWrite(trigPin, LOW)
  // SET TWO:
  // Sets trigPin to HIGH
  digitalWrite(trigPin, HIGH)
  delayMicroseconds(10);
  myServo2.write(170);
  digitalWrite(trigPin, LOW)
  // SET THREE:
  // Sets trigPin to HIGH
  digitalWrite(trigPin, HIGH)
  delayMicroseconds(10);
  myServo3.write(170);
  digitalWrite(trigPin, LOW)
  delay(1000)

  
 digitalWrite(led, LOW);
 digitalWrite(ledPin, LOW);
  lcd.print("Testing 2");
  // SET ONE:
  // Sets trigPin to HIGH
  digitalWrite(trigPin, HIGH)
  delayMicroseconds(10);
  myServo.write(90);
  digitalWrite(trigPin, LOW)
  // SET TWO:
  // Sets trigPin to HIGH
  digitalWrite(trigPin, HIGH)
  delayMicroseconds(10);
  myServo2.write(90);
  digitalWrite(trigPin, LOW)
   // SET THREE:
  // Sets trigPin to HIGH
  digitalWrite(trigPin, HIGH)
  delayMicroseconds(10);
  myServo3.write(90);
  digitalWrite(trigPin, LOW)
  delay(1000);
 }  
}
