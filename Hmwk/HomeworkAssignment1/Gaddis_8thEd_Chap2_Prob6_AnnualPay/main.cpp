/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7, 2024
 * Purpose: Annual Pay Problem
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
    float amount = 2200; //amount employee earns each pay period
    short period = 26; //pay periods per year
    float annual; //total annual pay
    
    //Initialize all variables
    
    //Process or Map Solutions
    annual = amount * period;
    
    //Display the output
    cout<<"The employee's total annual pay is $"<<annual<<endl;
    
    //Exit the program
    return 0;
}

