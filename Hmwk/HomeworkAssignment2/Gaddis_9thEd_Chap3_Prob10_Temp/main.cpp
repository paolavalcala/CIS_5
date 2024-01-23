/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: Calculate the gross pay! Problem
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
    float payRate = 10,//Pay rate in $'s/hour
        hrsWrkd = 20,//Hours worked
        grssPay;//Groos pay in $'s
    
    //Map inputs -> outputs
    grssPay = payRate*hrsWrkd;
    grssPay += (hrsWrkd>40) ? payRate*(hrsWrkd-40) : 0;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cout<<"Paycheck = $"<<setw(7)<<grssPay;

    //Exit stage right or left!
    return 0;
}

