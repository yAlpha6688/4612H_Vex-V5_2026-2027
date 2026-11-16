/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       ilikedogsx                                                */
/*    Created:      11/15/2026, 12:10:55 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "vex.h"
#include "vars.hpp"

//competition
vex::competition fightyFight;
//brain
vex::brain thinkyThink;

//pre-auton
void pre_auton(void) {

}

//auton
void autonomous(void) {

}

//user control
void usercontrol(void) {
  
}

//main
int main() {
  fightyFight.autonomous(autonomous);
  fightyFight.drivercontrol(usercontrol);

  pre_auton();

  //prevent main from exiting with an infinite loop
  while (true) {
    vex::wait(100, vex::msec);
  }
}
