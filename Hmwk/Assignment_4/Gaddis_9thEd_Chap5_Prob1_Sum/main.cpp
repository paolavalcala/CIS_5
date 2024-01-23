/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 17, 2024, 12:46 AM
 * Purpose: Payment in Pennies Problem
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
    int numDays;//number of days worked
    float sum = 0.01f;
    
    //Initialize or input i.e. set variable values
    cout << "Enter the number of days worked: ";
    cin>>numDays;
    
    //Map inputs -> outputs
    // Input Validation: Do not accept a number less than 1 for the number of days worked.
    while (numDays < 1) {
        cin>>numDays;
    }
    
    
    for (int day = 2; day <= numDays; ++day) { //each day starting at 2 leading up to total num of days
        sum *= 2;
    }
    
    //Display the outputs
    cout<<"Pay = $"<<fixed<<setprecision(2)<<sum;

    //Exit stage right or left!
    return 0;
}

