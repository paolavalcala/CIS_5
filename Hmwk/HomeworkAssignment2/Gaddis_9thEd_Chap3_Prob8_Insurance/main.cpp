/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024, 8:06 PM
 * Purpose: How much insurance do you need? Problem
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
    int rplcCost = 500000;
    float insurance;
    
    
    //Initialize or input i.e. set variable values
//    cin>>rplcCost;
    
    //Map inputs -> outputs
    insurance = .8 * rplcCost;//80% of replacement cost
    
    //Display the outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cout<<"You need $" << insurance <<" of insurance.";

    //Exit stage right or left!
    return 0;
}

