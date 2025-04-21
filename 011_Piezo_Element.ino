// Write a program using piezo element and use it to play a tune after someone knocks. 

const int buzzer = A1;           // Buzzer connected to A1
const int knockSensor = A0;      // Piezo sensor connected to A0
const int threshold = 400;       // Sensitivity threshold

int sensorReading = 0;

void setup() {
  pinMode(buzzer, OUTPUT);       // Set buzzer as output
  pinMode(knockSensor, INPUT);   // Set knock sensor as input
  Serial.begin(9600);            // Optional: for debugging
}

void loop() {
  sensorReading = analogRead(knockSensor);  // Read value from piezo

  if (sensorReading >= threshold) {
    Serial.println("Knock detected! Playing tune...");

    playTune();   // Call function to play the melody
  }

  delay(100); // Debounce delay
}

void playTune() {
  tone(buzzer, 261); // C
  delay(200);
  noTone(buzzer);

  tone(buzzer, 293); // D
  delay(200);
  noTone(buzzer);

  tone(buzzer, 329); // E
  delay(200);
  noTone(buzzer);

  tone(buzzer, 349); // F
  delay(200);
  noTone(buzzer);

  tone(buzzer, 392); // G
  delay(200);
  noTone(buzzer);
}
