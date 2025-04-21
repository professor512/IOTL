// Create a program that illuminates the green LED if the counter is less than 100, illuminate the yellow LED if 
// the counter is between 101 and 200 and illuminates the red LED if the counter is greater than 200.

import time
from gpiozero import LED

# Assign LEDs to GPIO pins
green_led = LED(7)
yellow_led = LED(22)
red_led = LED(23)

number = 0

while True:
    time.sleep(0.2)

    if number <= 100:
        green_led.on()
        yellow_led.off()
        red_led.off()
    elif 101 <= number <= 200:
        green_led.off()
        yellow_led.on()
        red_led.off()
    else:  # number > 200
        green_led.off()
        yellow_led.off()
        red_led.on()

    number += 1
