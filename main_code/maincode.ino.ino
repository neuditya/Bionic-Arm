#include <Servo.h>

const int EMG_PIN = A0;
const int NUM_SERVOS = 4;
const int SERVO_PINS[NUM_SERVOS] = {9, 10, 11, 12};
Servo servos[NUM_SERVOS];

const int T_LOW  = 50;
const int T_MID  = 150;
const int T_HIGH = 300;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < NUM_SERVOS; i++) {
    servos[i].attach(SERVO_PINS[i]);
    servos[i].write(0);
  }
}

void resetServos() {
  for (int i = 0; i < NUM_SERVOS; i++) servos[i].write(0);
}

void loop() {
  int emgValue = analogRead(EMG_PIN);
  Serial.println(emgValue);

  if (emgValue > T_HIGH) {
    for (int i = 0; i < NUM_SERVOS; i++) servos[i].write(90);
  } 
  else if (emgValue > T_MID) {
    servos[0].write(90);
    servos[1].write(90);
    servos[2].write(0);
    servos[3].write(0);
  } 
  else if (emgValue > T_LOW) {
    servos[0].write(90);
    for (int i = 1; i < NUM_SERVOS; i++) servos[i].write(0);
  } 
  else {
    resetServos();
  }

  delay(50);
}