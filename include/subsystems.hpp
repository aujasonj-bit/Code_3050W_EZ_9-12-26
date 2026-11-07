#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// declare devices

extern pros::Motor intake;

extern pros::MotorGroup lift;

extern pros::adi::DigitalOut claw;

//prototype functions here
void lift_opcontrol ();
void claw_opcontrol ();