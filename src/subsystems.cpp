#include "main.h"
#include "subsystems.hpp"

//define devices

pros::Motor intake(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);

pros::MotorGroup lift ({21, -21});

pros::adi::DigitalOut claw('A', true);

//all subsystem functions defined here (could do this in main.cpp but putting them here is better for organisation)


void lift_opcontrol (){ //opcontrol function for lift
    while (true){
        if (master.get_digital(DIGITAL_L1)){
            lift.move(127);
        }
        else if (master.get_digital(DIGITAL_L2)){
            lift.move(-127);
        }
        else {
            lift.move(0);
        }
    }
}

void claw_opcontrol (){ //opcontrol function for claw
    while (true){
    
    int claw_state = 1;

        if (master.get_digital(DIGITAL_A)){
            if (claw_state == 1){
                claw.set_value(0);
                claw_state = 0;
            }
            else {
                claw.set_value(1);
                claw_state = 1;
            }
        }
    }
}

