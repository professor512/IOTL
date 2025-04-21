// Understanding the connectivity of Raspberry-Pi /Beagle board circuit / Arduino with IR 
// sensor. Write an application to detect obstacle and notify user using LEDs. 

const int ledPin = 4;        // LED pin
const int irSensorPin = 9;   // IR sensor output pin

void setup() {
  pinMode(ledPin, OUTPUT);       // Set LED pin as output
  pinMode(irSensorPin, INPUT);   // Set IR sensor pin as input
}

void loop() {
  int obstacle = digitalRead(irSensorPin);  // Read sensor

  if (obstacle == LOW) {  // LOW when obstacle is present
    digitalWrite(ledPin, HIGH);  // Turn ON LED
  } else {
    digitalWrite(ledPin, LOW);   // Turn OFF LED
  }

  delay(100);  // Small delay for stability
}
