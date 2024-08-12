#ifndef SteerBot_TB6612_h
#define SteerBot_TB6612_h

#include <Arduino.h>

class SteerBot_TB6612 {
  public:
    SteerBot_TB6612(int ENA_pin, int ENB_pin, int AIN1_pin, int AIN2_pin, int BIN1_pin, int BIN2_pin, int default_speed); // Constructor
    void Forward(int t, int speedA, int speedB);
    void Forward(int t);
    void Backward(int t, int speedA, int speedB);
    void Backward(int t);
    void Left(int t, int speedA, int speedB);
    void Left(int t);
    void Right(int t, int speedA, int speedB);
    void Right(int t);
    void Stop(int t);
    void softLeft(int t);
    void softRight(int t);
    void setSpeed(int New_speed);
  private:
    int ENA;
    int ENB;
    int AIN1;
    int AIN2;
    int BIN1;
    int BIN2;
    int speed;
};

#endif
