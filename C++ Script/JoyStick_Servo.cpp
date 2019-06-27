// All variables regarding servo functions
Servo myServo;
int ledPin = 3;
int ledPin2 = 6;
int servoState = 0;

// All varaibles regarding joystick functions
int joyPin1 = 0;
int joypin2 = 1;
int value1 = 0;
int value2 = 0;

// setup all variable outputs
void setup() {
 pinMode(ledPin, OUTPUT);
 pinMode(ledPin2, OUTPUT);
 Serial.begin(9600);
}

int treatValue(int data) {
	return(data * 9 / 1024) + 48;
}

void loop() {
	value1 = analogRead(joyPin1);
    delay(100);
    value2 = analogRead(joypin2);

    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(value1);
    delayWrite(ledPin, LOW);
    delayWrite(ledPin2, LOW);
    Serial.print('J');
    Serial.print(treatValue(value1));
    Serial.print(treatValue(value2));
}