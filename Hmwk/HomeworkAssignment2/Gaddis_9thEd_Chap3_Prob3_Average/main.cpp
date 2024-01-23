/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: Calculate the Average Problem
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
    //Set the random number seed
    
    //Declare Variables
    float avrg;
    short num1=1, num2=2, num3=3, num4=4, num5=5;
    
    //Map inputs -> outputs
    avrg = (num1 + num2 + num3 + num4 + num5) / 5.0;
    
    //Display the outputs
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<< setprecision(1) << fixed << avrg;

    //Exit stage right or left!
    return 0;
}

