#include "vex.h"

namespace konstants {
    namespace drive {
        //dt values
        constexpr vex::brakeType DRIVE_STOP_MODE = coast;
        constexpr vex::brakeType AUTON_STOP_MODE = hold;
        constexpr double DEFAULT_AUTON_SPEED = 50;

        //wheel values
        constexpr double PIE = 3.14159265358979;
        constexpr double WHEEL_DIAMETER = 3.25; //inches
        constexpr double GEAR_RATIO = 1.0; // motor turns per ONE wheel turn

        //dt motors - all green cartridges
        vex::motor driveMotorL1 = vex::motor(vex::PORT2, vex::ratio18_1, true);
        vex::motor driveMotorL2 = vex::motor(vex::PORT1, vex::ratio18_1, false);
        vex::motor driveMotorR1 = vex::motor(vex::PORT10, vex::ratio18_1, false);
        vex::motor driveMotorR2 = vex::motor(vex::PORT9, vex::ratio18_1, true);

        //dt motor groups
        vex::motor_group leftDT(driveMotorL1, driveMotorL2);
        vex::motor_group rightDT(driveMotorR1, driveMotorR2);

        //inertial sensor
        vex::inertial turnyTurn = vex::inertial(vex::PORT8, vex::right);
    }
    namespace tools {
        //lift values
        constexpr double LIFT_UP_SPEED = 30;
        constexpr double LIFT_DOWN_SPEED = 30;
        constexpr double LIFT_RATIO = 1.0;    // motor turns per lift gear turn

        //intake values
        constexpr double SUCK_SPEED = 80;

        //claw values
        constexpr double GRAB_SPEED = 80;

        //controller
        vex::controller clickyClick = vex::controller();

        //lift motors - both green cartridges
        vex::motor liftMotorL1 = vex::motor(vex::PORT7, vex::ratio18_1, true   );
        vex::motor liftMotorR1 = vex::motor(vex::PORT6, vex::ratio18_1, false  );

        //lift motor group
        vex::motor_group liftyLift(liftMotorL1,   liftMotorR1);

        //claw - no cartridge
        vex::motor grabbyGrab = vex::motor(vex::PORT20, false);

        //claw intake - no cartridge
        vex::motor suckySuck1 = vex::motor(vex::PORT11, false);
    }
    namespace tuning{
        //PID konstants
        constexpr double DRIVE_KP = 0.35;
        constexpr double HEADING_KP = 1.5;

        //other tuning values
        constexpr double MIN_DRIVE_SPEED = 8;
        constexpr double DRIVE_TOLERANCE = 5;
        constexpr double STICK_DEADBAND = 5; //out of 100
    }
}
namespace changings {
    namespace drive {
        //speed
        bool            fastMode              = false;
        double          driveFactor           = 1;
        double          turnFactor            = 1;

        //controller
        double          fwrd                  = 0;
        double          turn                  = 0;
    }
    namespace tools {
        //currently pressed bools
        bool            yPressed              = false;
        bool            upPressed             = false;
        bool            downPressed           = false;

        //was pressed bools
        bool            yWasPressed           = false;
        bool            upWasPressed          = false;
        bool            downWasPressed        = false;
    }
}