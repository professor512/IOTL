
int redLed = 7;     // Red LED on pin 7
int yellowLed = 22; // Yellow LED on pin 22
int greenLed = 23;  // Green LED on pin 23
char key;           // Variable to store received character

void setup() {
  // Set all LED pins as outputs
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  // Turn all LEDs OFF initially
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);

  // Initialize serial communication
  Serial.begin(9600);    //baud rate
  Serial.println("Enter:");
  Serial.println("r - Red light ON");
  Serial.println("y - Yellow light ON");
  Serial.println("g - Green light ON");
  Serial.println("b - Green light BLINK");
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming byte
    key = Serial.read();
    Serial.print("Received: ");
    Serial.println(key);

    // Turn all LEDs OFF first
    allLedsOff();

    // Process the command
    if (key == 'r' || key == 'R') {
      // Red light ON
      digitalWrite(redLed, HIGH);
    } 
    else if (key == 'y' || key == 'Y') {
      // Yellow light ON
      digitalWrite(yellowLed, HIGH);
    } 
    else if (key == 'g' || key == 'G') {
      // Green light ON
      digitalWrite(greenLed, HIGH);
    }
    else if (key == 'b' || key == 'B') {
      // Blink green light (5 times)
      blinkGreen();
    } 
    else {
      // Invalid input
      Serial.println("Try r, y, g, or b");
    }
  }
}


void allLedsOff() {
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
}


void blinkGreen() {
  Serial.println("Green LED blinking...");
  

  for(int i = 0; i < 5; i++) {
    digitalWrite(greenLed, HIGH);  
    delay(500);                    
    digitalWrite(greenLed, LOW);   
    delay(500);                   
  }
  
  Serial.println("Blinking finished");
}

