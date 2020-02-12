/*
The program reads sensor data from an IR obstacle
sensor and turns on the lights if it detects no
obstacles in front of it. It works with
*/

#include <avr/sleep.h> // Library for Arduino sleep functions
#define interruptPin 3

int signalPin = 3;  // Digital pin for signal from sensor.
int ledPin = 2;  //  This pin turns on the MOSFET that will turn on the LEDS.

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(signalPin, INPUT_PULLUP);
    // The controller will detect if voltage has gone from LOW to HIGH.
    attachInterrupt(digitalPinToInterrupt(interruptPin), wakeUp, RISING );
}

void loop() {
    // Shuts down LEDs and puts the CPU to sleep by until interrupt occurs.
    digitalWrite(ledPin, LOW);
    sleep_enable();
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);
    delay(500);
    sleep_cpu();
}

void wakeUp() {
    // Wake up CPU and activate LED strip if the door is still open.
    sleep_disable();
    while ( signalPin == HIGH) {
        digitalWrite(ledPin, HIGH);
        // Wait for a second until checking again to if door is closed.
        delay(1000);
    }
}