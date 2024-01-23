/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 20, 2024, 4:01 AM
 * Purpose: Maximum of first 2 parameters then Maximum of 3 parameters Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float findMax (float param1, float param2);
float findMax (float param1, float param2, float param3);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float param1,
        param2,
        param3;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Enter first number:"<<endl;
    cin>>param1;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cin>>param2;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>param3;
    cout<<endl;
    
    float lrgst1 = findMax(param1, param2); 
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<lrgst1<<endl;
    cout<<endl;
    
    float lrgst2 = findMax(param1, param2, param3); 
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<lrgst2<<endl;

    //Exit stage right or left!
    return 0;
}

float findMax(float param1, float param2) {
    return (param1 > param2) ? param1 : param2;
}

// Function to find the maximum of three parameters using recursion 
float findMax(float param1, float param2, float param3) {
    return findMax(findMax(param1, param2), param3);
}