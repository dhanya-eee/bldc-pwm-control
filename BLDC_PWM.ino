// BLDC Motor Speed Control Simulation using PWM (Tinkercad Version)
// Author: Dhanya | EEE | M.Tech | 2025

const int potPin = A0;      // Potentiometer connected to A0
const int pwmPin = 9;       // PWM Output to LED (simulates BLDC motor)

void setup() {
  pinMode(pwmPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);          // Read analog input (0-1023)
  int pwmValue = map(potValue, 0, 1023, 0, 255); // Map to PWM range (0-255)

  analogWrite(pwmPin, pwmValue);              // Send PWM signal to LED
  delay(10);                                   // Small delay for stability
}
