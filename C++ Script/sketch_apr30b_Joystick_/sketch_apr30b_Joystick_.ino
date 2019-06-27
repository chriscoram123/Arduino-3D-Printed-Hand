int ledPin = 13;
int joyPin1 = 0;
int joyPin2 = 1;
int value1 = 0;
int value2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

int treatValue(int data) {
  return (data * 9 / 1024) + 48;
}
void loop() {
  // put your main code here, to run repeatedly:
  value1 = analogRead(joyPin1);
  delay(100);
  value2 = analogRead(joyPin2);

  digitalWrite(ledPin, HIGH);
  delay(value1);
  digitalWrite(ledPin, LOW);
  delay(value2);
  Serial.print('J');
  Serial.print(treatValue(value1));
  Serial.print(treatValue(value2));
}
