/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024, 6:53 PM
 * Purpose: Lab Assignment Percentages
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
    float fedBdgt = 6.8e12f;
    float mltBdgt = 7.4e11f;
    float mltPrcnt;
    
    //Initialize all variables
    
    //Process or Map Solutions
    mltPrcnt = (mltBdgt / fedBdgt) * 100;
    
    
    //Display the output
    cout<<"The military budget for 2021 is "<<mltPrcnt<<" % of the Federal budget."<<endl;
    
    //Exit the program
    return 0;
}

