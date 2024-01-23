/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: Calculate room occupancy and limits. Problem
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    short maxCap=300; //maximum room capacity 
    short numPpl=400; // number of people attending a meeting 
    short exclude;//how many people must be excluded in order to meet the fire regulations
    short addtonal;// how many additional people may legally attend
    string msg, msg2;
    
    //Initialize or input i.e. set variable values
    msg="";
    msg2="";
    
    //Map inputs -> outputs
    exclude = numPpl - maxCap; //calculates how many people must be excluded in order to meet the fire regulations
    addtonal = maxCap - numPpl; // calculates how many additional people may legally attend
    //if number of people is less than or equal to max cap meeting is legal 
    if (numPpl <= maxCap){
        msg="Meeting is cleared to be held.";
        msg2="An additional " + to_string(addtonal) + " people can attend the meeting.";
    }else{
        //if number of people is graeter than max cap than meeting is illegal
        if (numPpl > maxCap){
            msg="Meeting cannot be held.";
            msg2="Reduce number of people by " + to_string(exclude) + " to avoid fire violation.";
        }
    };
    
    //Display the outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cout<<msg<<endl;
    cout<<msg2;

    //Exit stage right or left!
    return 0;
}
