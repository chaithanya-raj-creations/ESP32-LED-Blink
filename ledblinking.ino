// ESP32 LED Blink

int ledPin = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // LED ON
  delay(1000);                 // 1 second

  digitalWrite(ledPin, LOW);   // LED OFF
  delay(1000);                 // 1 second
}