#include "main.h"
#include "subsystems.hpp"

//define devices
// pros::Controller controller(pros::controller_id_e_t::E_CONTROLLER_MASTER);

pros::Controller controller();

pros::Motor hpod1(-4, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor hpod2(5, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor intake(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor lift1(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor lift2(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);

pros::ADIDigitalOut claw('A');


//all subsystem functions defined here (could do this in main.cpp but putting them here is better for organisation)

void opcontrol_hdrive(){
    while (true) {
        int speed = master.get_analog(pros::controller_analog_e_t::E_CONTROLLER_ANALOG_LEFT_X);
        hpod1.move(speed);
        hpod2.move(speed);
    }
}

