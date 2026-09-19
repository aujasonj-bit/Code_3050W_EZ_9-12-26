#include "main.h"
#include "subsystems.hpp"

//define devices

pros::Motor hpod1(4, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor hpod2(5, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor intake(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor lift1(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor lift2(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);

pros::ADIDigitalOut claw('A');


//all subsystem functions defined here (could do this in main.cpp but putting them here is better for organisation)

void opcontrol_hdrive(){
    int speed = master.get_analog(pros::controller_analog_e_t::E_CONTROLLER_ANALOG_LEFT_X);
    hpod1.move(speed);
    hpod2.move(speed);

    // debug: print the stick value about every half second so you can confirm it's being read
    static int counter = 0;
    if (++counter % 50 == 0)
        printf("hdrive stick: %d\n", speed);
}

