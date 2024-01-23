/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7, 2024
 * Purpose: Ocean Levels Problem
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
   float yearly = 1.5; //1.5 millimeters 
   float fiveYrs, sevenYrs, tenYrs;
    
    //Process or Map Solutions
   fiveYrs = yearly * 5;
   sevenYrs = yearly * 7;
   tenYrs = yearly * 10;
    
    //Display the output
    cout<<"5 years: "<<fiveYrs<<" millimeters"<<endl;
    cout<<"7 years: "<<sevenYrs<<" millimeters"<<endl;
    cout<<"10 years: "<<tenYrs<<" millimeters"<<endl;
    
    //Exit the program
    return 0;
}

