/*
Test Ping Distance.c
Measure and display Ping))) Ultrasonic Distance Sensor distance measurements.
http://learn.parallax.com/propeller-c-simple-devices/sense-distance-ping
*/

#include "simpletools.h" // Include simpletools header
#include "ping.h" // Include ping header
#include "abdrive.h"
int distanceR;
int distanceFwd;
int fwdAllowed;
int main()
// main function
{

while(1){
distanceFwd = ping_cm(8);
distanceR = ping_cm(9);
if (distanceR>20){
fwd();
fwd();
turnR();
fwdAllowed=1;
distanceFwd = ping_cm(8);
if (distanceFwd>10
){
fwd();
fwd();
fwd();
fwd();
fwd();
fwd();
drive_goto(10,10);
}//end distace fwd
}//end if distanceR
distanceFwd = ping_cm(8);
distanceR = ping_cm(9);
if (distanceFwd>10 && distanceR<20){
fwd();
} //end if distance fwd>10 distanceR<15
distanceFwd = ping_cm(8);
distanceR = ping_cm(9);
if (distanceFwd<10 && distanceR<20){
turnL ();
} //end if distanceFwd<10 distanceR<15
}//end while 1
}//end function

void turnR(){
drive_goto(26,-25);
}
void turnL(){
drive_goto(-25,26);
}

void fwd(){
drive_goto(10,10);


}