// Define motor pins
const int motor1Pin1 = 3;  // Motor 1 input pin 1
const int motor1Pin2 = 4;  // Motor 1 input pin 2
const int motor2Pin1 = 5;  // Motor 2 input pin 1
const int motor2Pin2 = 6;  // Motor 2 input pin 2

// Define button pin
const int buttonPin = 7;  // Start button pin

// Define motor enable pins 
const int enable1Pin = 9;
const int enable2Pin = 10;

void setup() {
  // Set motor pins as outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);

  // Set button pin as input
  pinMode(buttonPin, INPUT_PULLUP);

  // Set enable pins as outputs 
  pinMode(enable1Pin, OUTPUT);
  pinMode(enable2Pin, OUTPUT);

  // Initialize motors to off
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
}

void loop() {
  // Wait for the start button to be pressed
  if (digitalRead(buttonPin) == LOW) {
    // Start the motors
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, HIGH);
    digitalWrite(motor2Pin2, LOW);

    // Enable motors 
    analogWrite(enable1Pin, 255);
    analogWrite(enable2Pin, 255);
  } else {
    // Stop the motors
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);

    // Disable motors 
    analogWrite(enable1Pin, 0);
    analogWrite(enable2Pin, 0);
  }
}
