# Arduino-Project-Code
This Code is purely in order to set the position of the motor to draw a simple house. It draw an outline of a house, as well as a little door.
The circuit accompanying this code does most of the work however.
A difference amplifier is used to get the position of the motor in terms of voltage from the linear potentiometer, and it recieves a sigal from the arduino.
The code from the arduino specifies where the motor should move to, and it will move there until either the delay is finished (next piece of code starts running)
or, the difference amplifier calculation results in zero output voltage in which case there is no voltage to drive the motor which is what we 
would want in this case because it is already at the desired position.

The underlying concept behind the circuit is a closed loop control system with a difference amplifier and this is just the accompanying arduino code. 
See it in action here!
https://www.youtube.com/watch?v=PhctDrycgPk
