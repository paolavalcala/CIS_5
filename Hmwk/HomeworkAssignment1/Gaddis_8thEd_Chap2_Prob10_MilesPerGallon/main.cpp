/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7, 2024
 * Purpose: Miles Per Gallon Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
    short miles = 375; //miles driven
    short gallons = 15; //gallons of gas used
    float MPG;

    //Process or Map Solutions
    MPG = static_cast<float>(miles) / gallons;
    
    //Display the output
    cout<<"Miles per gallon: "<<MPG<<endl;
    
    //Exit the program
    return 0;
}

