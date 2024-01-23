/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 17, 2024, 1:51 AM
 * Purpose: Rectangle with same number of rows as columns Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short num;
    char letter;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a positive integer (no greater than 15): ";
    cin>>num;
    
    cout << "Enter a letter from the alphabet: ";
    cin>>letter;
    
    //Map inputs -> outputs
    //input = a positive integer no greater than 15
    if (num <= 0 || num >= 15) {
        cout << "Invalid input. Please enter a positive integer less than 15." << endl;
        return 1;  // Exit with an error code
    }
    
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            cout << letter;
        }
        if (i < num - 1) {  // excluding endl from the last row
            cout << endl;
        }
    }
    

    //Exit stage right or left!
    return 0;
}