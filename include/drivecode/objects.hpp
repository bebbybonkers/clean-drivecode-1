#include "main.h"
#include "lemlib/api.hpp"
#include <string>

extern pros::MotorGroup leftMotors;
extern pros::MotorGroup rightMotors;

extern lemlib::Drivetrain drivetrain;
extern lemlib::Chassis chassis;

extern pros::Controller controller;

extern pros::adi::AnalogOut piston;

// ports
extern int leftMotorPorts[];
extern int rightMotorPorts[];
extern int intakePort;
extern int scoringPort;
extern char trapdoorPort;
extern char wingPort;
extern char loaderPort;
