/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 31, 2024
 * Purpose: Factorial Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
int fctrl(int num);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    int factorial;
    
    //Output data
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    //Initialize Variables
    cin>>num;
    
    //Process/Map inputs to outputs
    factorial = fctrl(num);
    cout<<num<<"! = "<<factorial;
    
    //Exit stage right!
    return 0;
}

int fctrl(int num){
    int result = 1; // Initialize result to 1 for the multiplication

    // Calculate factorial
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }

    return result;
}