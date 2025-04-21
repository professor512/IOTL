// Create a program so that when the user enters ‘b’ the green light blinks, ‘g’ the green light is illuminated ‘y’ 
// the yellow light is illuminated and ‘r’ the red light is illuminated.

import time
from gpiozero import LED

# Assign LEDs
green_led = LED(7)
red_led = LED(22)
yellow_led = LED(23)
extra_led = LED(25)  # not used in logic

# Turn all LEDs on initially
green_led.on()
red_led.on()
yellow_led.on()
extra_led.on()

while True:
    key = input("Enter Character (g = green, r = red, y = yellow, b = blink green): ").lower()
    print("You pressed:", key)

    if key == 'g':
        green_led.off()
        red_led.on()
        yellow_led.on()
        extra_led.on()

    elif key == 'r':
        green_led.on()
        red_led.off()
        yellow_led.on()
        extra_led.on()

    elif key == 'y':
        green_led.on()
        red_led.on()
        yellow_led.off()
        extra_led.on()

    elif key == 'b':
        # Blink green LED 5 times
        for _ in range(5):
            green_led.off()
            time.sleep(0.3)
            green_led.on()
            time.sleep(0.3)
        red_led.on()
        yellow_led.on()
        extra_led.on()

    else:
        # Turn all LEDs on if input is invalid
        green_led.on()
        red_led.on()
        yellow_led.on()
        extra_led.on()
