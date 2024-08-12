#include <Arduino.h>
#include <SteerBot_TB6612.h>

const int AIN1 = 16;
const int AIN2 = 8;
const int BIN1 = 14;
const int BIN2 = 15;
int speed = 155; 
const int ENA = 13;
const int ENB = 17;
int r;  

// Create an instance of the SteerBot-TB6612 class for QCTT
SteerBot_TB6612 QCTT(ENA, ENB, AIN1, AIN2, BIN1, BIN2, speed);
void setup() {
  pinMode(3, INPUT); // Line sensors
  pinMode(10, INPUT);
  pinMode(6, INPUT); // IR distance sensor

  // Speed control
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  
  // Outputs
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  QCTT.Backward(5000,75,15);

  QCTT.Stop(600);
}
