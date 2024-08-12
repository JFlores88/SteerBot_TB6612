# SteerBot_TB6612
This library was designed to control the movement of a 2 wheeled diferential robot that uses a TB6612 dual motor driver. 
While there's no reason it wouldn't work in any other context, this library was specifically made for bumperbot robots

The functions included in the library are:

    Forward(int t, int speedA, int speedB);
    Forward(int t);

    Backward(int t, int speedA, int speedB);
    Backward(int t);

    Left(int t, int speedA, int speedB);
    Left(int t);

    Right(int t, int speedA, int speedB);
    Right(int t);

    Stop(int t);
    softLeft(int t);
    softRight(int t);
    setSpeed(int New_speed);

Notes
	This library was made while considering the left motor as motor A, while the motor on the right would be motor B. Some functions might not work correctly if the motors are declared the other way around.

	The functions Forward, Backward, Left and Right all have two versions, in the simplest form each function only requires you to specify the time (in miliseconds) you want the function to be active and the speed will be determined by a speed defined before, while the other version allows you to choose the speeds of each of the motors (0-255).

	The Stop function stops (obviously) both motors.

	The functions softLeft and softRight are vestigial and shouldn't be used. However, these functions are based on the Forward function but one of the motors only goes at 85% the speed of the other, resulting on the robot slowly turning in that direction.

	The function setSpeed modifies the speed in which the robot does the functions on which the user doesn't specify speed for each motor.

Good luck with your Robots :)
