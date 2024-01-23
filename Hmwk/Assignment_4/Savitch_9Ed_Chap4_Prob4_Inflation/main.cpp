/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 20, 2024, 2:19 AM
 * Purpose: Rate of Inflation Problem
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
    //Declare Variables
    short num;
    
    //Initialize or input i.e. set variable values
    while (true) {
        // Input a number
        cout << "Enter a number (or a number higher than 10 to exit): ";
        cin >> num;

        // Check if the input is higher than 10
        if (num > 10) {
            cout << "Exiting program..." << endl;
            break; // Exit the while loop
        }
    
    //Map inputs -> outputs
    //Display the outputs
        // Outputs an increase from 1 to 10
       for(int i = 1; i <= num; ++i){
           for(int j = 0; j < i; ++j){
               cout<<"+";
           }
           cout<<endl<<endl;
       }

       // decreases from 10 to 1
       for(int i = num; i >= 1; --i){
           for(int j = 0; j < i; ++j){
               cout<<"+";
           }
           if (i > 1) {
               cout<<endl<<endl;
           }
        }
    }
    
    //Exit stage right or left!
    return 0;
}

