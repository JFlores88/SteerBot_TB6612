Esta librería está diseñada para controlar un robot (especificamente diseñada para bumperbot) por medio de un driver TB6612

A la hora de declarar la librería
1.- Añadir la libreria " #include<SteerBot_TB6612>"
2.- Declarar el objeto de la clase Bumpermovements
	SteerBot_TB6612 TuRobot(ENA, ENB, AIN1, AIN2, BIN1, BIN2, speed);

3.- A la hora de utilizar alguna de las funciones se llaman por:
	TuRobot.Nombredefunción(variablesdefuncion)

Las funciones incluidas en la librería son:
    SwapMotors();
    InvertMotors(bool motor);

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

Notas

	Las funciones Forward, Backward, Left y Right cuentan con dos versiones, la más simple sólo requiere decir el tiempo (en milisegundos) por el que quieres activa la función y el robot se moverá de acuerdo a la velocidad que tenga determinada, mientras que si se añade la velocidad (de 0-255) a la que se quiere que vaya cada motor el robot obedecerá esas velocidades e ignorará la que tiene como default.
	
	La función Stop detiene ambos motores.
	
	Las funciones softLeft y softRight son vestigiales y se recomienda no utilizarlas, sin embargo, utilizan la velocidad guardada del robot y girarán uno de los motores al 85% de la velocidad ocasionando que el robot gire lentamente a esa dirección (se quedan para no romper compatibilidad con códigos anteriores.

	La función setSpeed modifica la velocidad guardada del robot para aquellas funciones que la utilizan. 
	
	Las funciones SwapMotors e InvertMotor están diseñadas para usarse en la etapa de configuración, ya que afectan las declaraciones de los motores. SwapMotors() se hace para intercambiar cuál motor está a la izquierda y cuál a la derecha (por defecto, el motor A está a la izquierda). InvertMotor(bool motor) recibe un valor booleano para decidir qué motor afectar (si el booleano es falso, cambia el motor A; de lo contrario, el motor B) y está destinada a usarse si un motor gira en la dirección contraria a la que debería.

Suerte con tu robot  :D
