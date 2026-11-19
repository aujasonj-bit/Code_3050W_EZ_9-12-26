#include "main.h"
#include "subsystems.hpp"

//define devices

pros::Motor intake(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);

pros::MotorGroup lift ({21, -21});

pros::Motor claw(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);

//all subsystem functions defined here (could do this in main.cpp but putting them here is better for organisation)


void lift_opcontrol (){ //opcontrol function for lift
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)){
            lift.move(127);
        }
        else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)){
            lift.move(-127);
        }
        else {
            lift.move(0);
        }

// pros::delay (100);
}

void claw_opcontrol (){ //opcontrol function for claw

    int claw_state = 0; //sets initial claw state to false
    
        //button readings
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)){
            claw_state = 1;
        }
        else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)){
            claw_state = -1;
        }
        else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1) and master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)){
            claw_state = 0;
        }

        //movement commands
        if(claw_state == 1){
            claw.move(127);
        }
        else if (claw_state == -1){
            claw.move(-127);
        }
        else {
            claw.move(0);
        }

// pros::delay (100);
}
