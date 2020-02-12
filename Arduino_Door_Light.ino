/*
The program reads sensor data from an IR obstacle
sensor and turns on the lights if it detects no
obstacles in front of it. It works with
*/

#include <avr/sleep.h> // Library for Arduino sleep functions
#define interruptPin 2

int signalPin = 3;  // Digital pin for signal from sensor.
int ledPin = 2;  //  This pin turns on the MOSFET that will turn on the LEDS.

void setup() {
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
    pinMode(signalPin, INPUT_PULLUP);
}

void loop() {
    //stub
}

void wakeUp() {
    //stub
}