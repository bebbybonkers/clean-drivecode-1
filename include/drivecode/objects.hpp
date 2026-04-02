#include "main.h"
#include "lemlib/api.hpp"
#include "pros/misc.h"
#include <string>

extern pros::MotorGroup leftMotors;
extern pros::MotorGroup rightMotors;

extern lemlib::Drivetrain drivetrain;
extern lemlib::Chassis chassis;

extern pros::Controller controller;

extern pros::adi::AnalogOut piston;

// ports
extern int intakePort;
extern int scoringPort;
extern char trapdoorPort;
extern char wingPort;
extern char loaderPort;

// controls
extern pros::controller_digital_e_t intakeButton;
extern pros::controller_digital_e_t outtakeButton;
extern pros::controller_digital_e_t trapdoorButton;
extern pros::controller_digital_e_t wingButton;
extern pros::controller_digital_e_t loaderButton;
extern pros::controller_digital_e_t scoringButton;