/*
 * Project: LED Blinking using Arduino
 * Purpose: Blink an LED on and off at a fixed interval
 * Board: Arduino Uno
 * Author: <Your Name>
 * Date: <Date>
 */

// Define the pin connected to the LED
const int LED_PIN = 13;          // Built-in LED on Arduino Uno

// Define the blink interval in milliseconds
const int BLINK_DELAY = 1000;    // 1 second ON, 1 second OFF

void setup() {
  // Set the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // Turn LED ON
  delay(BLINK_DELAY);            // Wait

  digitalWrite(LED_PIN, LOW);    // Turn LED OFF
  delay(BLINK_DELAY);            // Wait
}