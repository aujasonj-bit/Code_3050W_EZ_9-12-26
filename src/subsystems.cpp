#include "main.h"
#include "subsystems.hpp"

//define devices

pros::Motor intake(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor lift1(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);
pros::Motor lift2(21, pros::v5::MotorCartridge::green, pros::v5::MotorEncoderUnits::degrees);

pros::ADIDigitalOut claw('A');


//all subsystem functions defined here (could do this in main.cpp but putting them here is better for organisation)
