/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7, 2024
 * Purpose: Average of Values Problem
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
    short a = 28; //value 1
    short b = 32; //value 2 
    short c = 37; //value 3
    short d = 24; //value 4
    short e = 33; //value 5
    short sum;
    float average;
    
    //Initialize all variables
    sum = a + b + c + d + e;
    
    //Process or Map Solutions
    average = static_cast<float>(sum) / 5;
    
    //Display the output
    cout<<"The average is: "<<average<<endl;
    
    //Exit the program
    return 0;
}

