/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024, 7:41 PM
 * Purpose: Lab Assignment Percentages Version 2
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
    float fedBdgt = 4.1e12f;
    float mltBdgt = 7.0e11f;
    float mltPrcnt;
    
    //Initialize all variables
    
    //Process or Map Solutions
    mltPrcnt = (mltBdgt / fedBdgt) * 100;
    
    
    //Display the output
    cout<<"The military budget for 2018 is "<<mltPrcnt<<" % of the Federal budget."<<endl;
    
    //Exit the program
    return 0;
}

