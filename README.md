# SteerBot_TB6612
This library was designed to control the movement of a 2 wheeled diferential robot that uses a TB6612 dual motor driver. 
While there's no reason it wouldn't work in any other context, this library was specifically made for bumperbot robots

The functions included in the library are:
    
    SwapMotors();
    InvertMotor(bool motor);
    
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
	
	The functions Forward, Backward, Left and Right all have two versions, in the simplest form each function only requires you to specify the time (in miliseconds) you want the function to be active and the speed will be determined by a speed defined before, while the other version allows you to choose the speeds of each of the motors (0-255).

	The Stop function stops (obviously) both motors.

	The functions softLeft and softRight are vestigial and shouldn't be used. However, these functions are based on the Forward function but one of the motors only goes at 85% the speed of the other, resulting on the robot slowly turning in that direction.

	The function setSpeed modifies the speed in which the robot does the functions on which the user doesn't specify speed for each motor.

 	The functions SwapMotors and InvertMotor are desinged to be used on the setup stage since they affect the motor declarations. SwapMotors() is made to flip which motor is on the left and which is on the right (By default motorA is the left one). InverMotor(bool motor) takes a boolean input to decide which motor to affect (if the bool is false it changes motor A, otherwise motor B) and it's meant to be used if a motor spins in the opposite direction it should.

Good luck with your Robots :)
