# IoT RGB LED Controller using Potentiometers

This project demonstrates how to control the color of an RGB LED using three potentiometers, each adjusting the intensity of Red, Green, and Blue light respectively. It’s an ideal beginner-level IoT and Arduino project focused on analog input and PWM output control.

## 💡 Features

- Control RGB LED color using analog input
- Real-time LED color mixing
- Compatible with common anode RGB LEDs (easily adaptable for cathode)
- Simple hardware wiring and setup

## 🛠️ Hardware Requirements

- Arduino Uno (or compatible board)
- RGB LED (common anode or cathode)
- 3x 10kΩ Potentiometers
- 3x 220Ω Resistors (for LED)
- Breadboard & jumper wires
- USB cable for Arduino

## 🧩 Wiring Diagram

| Component         | Arduino Pin |
|------------------|-------------|
| Red LED Pin      | D5 (PWM)    |
| Green LED Pin    | D6 (PWM)    |
| Blue LED Pin     | D3 (PWM)    |
| Potentiometer 1  | A0 (Red)    |
| Potentiometer 2  | A2 (Green)  |
| Potentiometer 3  | A3 (Blue)   |

> **Note**: If you're using a **common cathode LED**, remove the `255 -` inversion in the code.

## 📦 Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/iot-rgb-led-controller.git
    ```

2. Open the `.ino` file using the Arduino IDE.

3. Select your board and port in the IDE.

4. Upload the sketch to the Arduino board.

## 🧪 Usage

- Turn each potentiometer to adjust the brightness of its corresponding color.
- The RGB LED will mix the red, green, and blue intensities to create a combined color.
- The LED updates every second based on the potentiometer readings.

## 🔄 Future Enhancements

- Add WiFi (ESP8266/ESP32) to control LED remotely via web or mobile app
- Use a color sensor to mirror external colors
- Add a display to show RGB values in real-time

## 📄 License

This project is open source under the MIT License. Feel free to fork, modify, and share!

---

Made with ❤️ using Arduino
