#include "SteerBot_TB6612.h"

SteerBot_TB6612::SteerBot_TB6612(int ENA_pin, int ENB_pin, int AIN1_pin, int AIN2_pin, int BIN1_pin, int BIN2_pin, int default_speed) {
  // Constructor, initialize your motor driver pins and speed parameter here
  ENA = ENA_pin;
  ENB = ENB_pin;
  AIN1 = AIN1_pin;
  AIN2 = AIN2_pin;
  BIN1 = BIN1_pin;
  BIN2 = BIN2_pin;
  speed = default_speed;
}

void SteerBot_TB6612::Forward(int t, int speedA, int speedB) {
  analogWrite(ENA, speedA);
  analogWrite(ENB, speedB);
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  delay(t);
}

void SteerBot_TB6612::Forward(int t) {
  analogWrite(ENA, speed * 0.75);
  analogWrite(ENB, speed * 0.75);
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  delay(t);
}

void SteerBot_TB6612::Backward(int t, int speedA, int speedB) {
  analogWrite(ENA, speedA);
  analogWrite(ENB, speedB);
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  delay(t);
}

void SteerBot_TB6612::Backward(int t) {
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  delay(t);
}

void SteerBot_TB6612::Left(int t, int speedA, int speedB) {
  analogWrite(ENA, speedA);
  analogWrite(ENB, speedB);
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  delay(t);
}

void SteerBot_TB6612::Left(int t) {
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  delay(t);
}

void SteerBot_TB6612::Right(int t, int speedA, int speedB) {
  analogWrite(ENA, speedA);
  analogWrite(ENB, speedB);
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  delay(t);
}

void SteerBot_TB6612::Right(int t) {
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  delay(t);
}

void SteerBot_TB6612::Stop(int t) {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, LOW);
  delay(t);
}

void SteerBot_TB6612::softLeft(int t) {
  analogWrite(ENA, speed);
  analogWrite(ENB, speed * 0.85);
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  delay(t);
}

void SteerBot_TB6612::softRight(int t) {
  analogWrite(ENA, speed * 0.85);
  analogWrite(ENB, speed);
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  delay(t);
}

void SteerBot_TB6612::setSpeed(int New_speed)
{
  speed=New_speed;
}