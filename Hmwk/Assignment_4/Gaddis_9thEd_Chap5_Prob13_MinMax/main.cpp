/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 16, 2024, 1:12 AM
 * Purpose: Display the Largest and Smallest Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    signed short large = 0;
    signed short small = 32760;
    signed short nums;
    signed short end = -99;
    
    //Initialize or input i.e. set variable values
    cin>>nums;
    
    //Map inputs -> outputs
    // display the largest and smallest numbers entered.
    while (nums != end) {
        if (nums > large) {
            large = nums; // Update largest if a larger number is found
        }
        if (nums < small) {
            small = nums; // Update smallest if a smaller number is found
        }

        // Input: Get the next number
        cout << "Enter a series of numbers. Enter -99 to mark the end of the series: ";
        cin >> nums;
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large;

    //Exit stage right or left!
    return 0;
}