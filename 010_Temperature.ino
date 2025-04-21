// Write a program read the temperature sensor and send the values to the serial monitor on the 
// computer.

#include <SimpleDHT.h>

int pinDHT11 = A1;             // DHT11 sensor connected to analog pin A1
SimpleDHT11 dht11(pinDHT11);  // Create sensor object

void setup() {
  Serial.begin(115200);       // Start serial communication
}

void loop() {
  Serial.println("=================================");
  Serial.println("Reading DHT11 Sensor...");

  byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;

  // Read temperature and humidity
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err=");
    Serial.print(SimpleDHTErrCode(err));
    Serial.print(", ");
    Serial.println(SimpleDHTErrDuration(err));
    delay(1000);
    return;
  }

  // Print the sensor readings
  Serial.print("Temperature: ");
  Serial.print((int)temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print((int)humidity);
  Serial.println(" %");

  delay(1500);  // Wait before next reading (DHT11 updates at ~1Hz)
}
