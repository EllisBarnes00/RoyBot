// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutonomousCommand.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

AutonomousCommand::AutonomousCommand(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. Requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
	SetTimeout(5);//drive forward for three seconds, change as needed.
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void AutonomousCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand::Execute() {
	// 1.9 Foot per second at 0.5 speed
	Robot::driveTrain.get()->driveBackwardRight(0.6);
	Robot::driveTrain.get()->driveBackwardLeft(0.6);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousCommand::IsFinished() {
    return IsTimedOut();
}

// Called once after isFinished returns true
void AutonomousCommand::End() {
	Robot::driveTrain.get()->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousCommand::Interrupted() {
	Robot::driveTrain.get()->stop();
}