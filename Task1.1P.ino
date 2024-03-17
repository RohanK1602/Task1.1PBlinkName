const int ledPin = 13; // Pin connected to the LED

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  // Blink R
  blinkDot(); 
  delay(200); 
  blinkDash(); 
  delay(200); 
  blinkDot();
  delay(200);

  // Blink O
  blinkDash(); 
  delay(200); 
  blinkDash(); 
  delay(200); 
  blinkDash(); 
  delay(200);

  // Blink H
  blinkDot(); 
  delay(200); 
  blinkDot(); 
  delay(200); 
  blinkDot(); 
  delay(200); 
  blinkDot(); 
  delay(200);

  // Blink A
  blinkDot(); 
  delay(200); 
  blinkDash(); 
  delay(200);

  // Blink N
  blinkDash(); 
  delay(200); 
  blinkDot(); 
  delay(200);

  delay(5000); // Delay after finishing word
}

void blinkDot() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(200); // Duration of a dot
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(200); // Delay between dots and dashes within the same letter
}

void blinkDash() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(600); // Duration of a dash
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(200); // Delay between dots and dashes within the same letter
}
