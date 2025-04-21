// Write a program to control the color of the LED by turning 3 different potentiometers. One will be read for 
// the value of Red, one for the value of Green, and one for the value of Blue. 

int red_light_pin = 5;
int green_light_pin = 6;
int blue_light_pin = 3;

unsigned int red, green, blue;

void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() {
  red = analogRead(A0) / 4;    // Scale 0-1023 to 0-255
  green = analogRead(A2) / 4;
  blue = analogRead(A3) / 4;

  // Set the color (invert if common anode RGB LED)
  RGB_color(255 - red, 255 - green, 255 - blue);

  delay(1000);

  // Uncomment the block below to test fixed colors without potentiometers
  /*
  RGB_color(0, 255, 255); // Red
  delay(1000);
  RGB_color(255, 0, 255); // Green
  delay(1000);
  RGB_color(255, 255, 0); // Blue
  delay(1000);
  RGB_color(0, 0, 125);   // Raspberry
  delay(1000);
  RGB_color(255, 0, 0);   // Cyan
  delay(1000);
  RGB_color(0, 255, 0);   // Magenta
  delay(1000);
  RGB_color(0, 0, 255);   // Yellow
  delay(1000);
  RGB_color(0, 0, 0);     // White
  delay(1000);
  */
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value) {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
