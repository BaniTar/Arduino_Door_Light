/*
The program reads sensor data from an IR obstacle
sensor and turns on the lights if it detects no
obstacles in front of it.
*/


int interval = 500;  // Delay between sensor reads.
int signalPin = A0;  // Analog pin for signal from sensor.
int ledPin = 2;  //  This pin turns on the MOSFET that will turn on the LEDS.

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  /* Get sensor data as voltage. The sensor takes 3.3 V power
  and analogRead ranges from 20 to 722 with low voltage when obstructed
  and high voltage if not obstructed. */
  float sensorData = analogRead(signalPin) * (3.3 / 722);

  // Turn on MOSFET when not obstructed.
  if (sensorData > 1.0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(interval);
}