/*
The program reads sensor data from an IR obstacle
sensor and turns on the lights if it detects no
obstacles in front of it.
*/


int interval = 1000;  // Delay between sensor reads.
int signalPin = A0;  // Analog pin for signal from sensor.
int ledPin = 3;  //  This pin turns on the MOSFET that will turn on the LEDS.

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorData = analogRead(signalPin);
  delay(timer)

}