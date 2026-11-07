#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// declare devices

extern pros::Motor intake;

extern pros::MotorGroup lift;

extern pros::ADIDigitalOut claw;

//prototype functions here
void opcontrol_hdrive();