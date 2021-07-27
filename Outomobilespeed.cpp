#include <iostream>

using namespace std;

int main()
{
int current_speed;
int previous_speed;
int totalfeettraveled;
int intervalfeettraveled;
float averageSpeed;
float averageSpeed_feetperSecond;
char command;
float distance;

int timeInterval=1;
char currentState[20];
int delta=5;
cout<<"enter current state of vehicle :stopped , accelerating , crusing , or breaking";
cin>>currentState;
cout<<"enter currrent speed of vehicle in mph";
cin>>current_speed;
cout<<"enter previous speed of the vehicle in mph";
cin>>previous_speed;
cout<<"enter timeInterval";
cin>>timeInterval;
averageSpeed=(current_speed+previous_speed)/2;
averageSpeed_feetperSecond=averageSpeed * (5280.0 / 3600.0) ;
intervalfeettraveled=averageSpeed_feetperSecond * timeInterval;
distance=averageSpeed_feetperSecond * timeInterval;
cout<<"current net distance travelled by your vehicle is"<<distance;
cout<<"Enter next command 'a' for accelerate, 'b' for braking ,'c' for cruise";
cin>>command;
switch(command){
case 'a' :
previous_speed=current_speed;
current_speed=current_speed+delta;
break;
case 'b' :
previous_speed=current_speed;
current_speed=current_speed-delta;
break;
case 'c' :
previous_speed=current_speed;
break;
default:
cout << "Invalid response";

}
distance=averageSpeed_feetperSecond * timeInterval;
cout<<"current net distance travelled by your vehicle is"<<distance;
return 0;
}
