/*
The program reads sensor data from IR obstacle sensor and turns on the
lights if it detects no obstacles in front of it.
*/

int timer = 1000;  // Delay between sensor reads.
int signalPin = A0;  // Analog pin for signal from sensor.
int ledPin = 3;  //  This pin turns on the MOSFET that will turn on the LEDS.

void setup() {

}

void loop() {

}