/*
* Ultrasonic Sensor Setup
* 
* @Christopher Sean coram
* June - 26 - 2019
* 
*/

// Pin Numbers
const int trigPin = 9;
const int echoPin = 8;
// Defined Varaibles
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets trigPin as OUTPUT
pinMode(echoPin, INPUT); // Sets the echoPin as INPUT
Serial.begin(9600); // Starts The Serial Communication
}

void loop() {
  // Clear trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets trigPin on HIGH for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returms sound wave travel time in micro seconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating distance
  distance = duration * 0.034/2;

  // Prints the distance on the serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

}
