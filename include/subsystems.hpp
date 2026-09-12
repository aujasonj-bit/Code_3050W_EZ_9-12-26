#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "subsystems.cpp"

extern Drive chassis;

// declare devices
extern pros::Controller master();

extern pros::Motor hpod1;
extern pros::Motor hpod2;
extern pros::Motor intake;
extern pros::Motor lift1;
extern pros::Motor lift2;

extern pros::ADIDigitalOut clamp;

//prototype functions here


void opcontrol_hdrive();
