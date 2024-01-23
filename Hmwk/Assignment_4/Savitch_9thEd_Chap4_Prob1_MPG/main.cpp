/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 18, 2024, 7:51 PM
 * Purpose: MPG conversion Problem Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float ltrsPGlln = 0.264179; //liters per gallon

//Function Prototypes
float clclteMPG(float liters, float miles);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float liters;//  number of liters of gasoline consumed by the user’s car 
    float miles;// the number of miles traveled by the car
    float mpg;// output the number of miles per gallon the car delivered
    char repeat;
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liters;
        cout<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<endl;
        cout<<"miles per gallon:"<<endl;
        
        // compute the number of miles per gallon.
        mpg = clclteMPG(liters, miles);
        
        cout<<fixed<<setprecision(2)<<mpg<<endl;
        cout<<"Again: (y/n) ?"<<endl;
        cin>>repeat;
        if(repeat == 'y')cout<<endl;
    }  while (repeat == 'y');

    //Exit stage right or left!
    return 0;
}

float clclteMPG(float liters, float miles) {
    return miles / (liters * ltrsPGlln);
}