/*LAB5.1 IR */
//https://app.cirkitdesigner.com/project/beb8a577-271c-4b0f-a1fe-3ea4c3ec4fef

#define sensorPin  8  // Pin connected to the sensor's OUT pin
#define ledPin  13    // Pin connected to the onboard LED

void setup() {
  pinMode(sensorPin, INPUT);  // Set the sensor pin as input
  pinMode(ledPin, OUTPUT);    // Set the LED pin as output
  Serial.begin(9600);         // Initialize serial communication for debugging
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read the sensor's output

  if (sensorValue == HIGH) {
    // Object detected
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    Serial.println("Object detected!");
  } else {
    // No object detected
    digitalWrite(ledPin, LOW);   // Turn off the LED
    Serial.println("No object detected.");
  }

  delay(100);  // Small delay for stability
}
