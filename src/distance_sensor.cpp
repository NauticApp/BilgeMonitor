#include "distance_sensor.h"
#include <Arduino.h>

const int trigPin = 4;
const int echoPin = 5;

float readDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH);
  float distanceCentimeters = (duration / 2.0) * 0.0343; // Convert to centimeters

  return distanceCentimeters;
}