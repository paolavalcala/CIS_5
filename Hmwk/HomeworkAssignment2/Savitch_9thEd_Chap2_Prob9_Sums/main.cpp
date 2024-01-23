/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: Sum positive, negative and all numbers.
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
    short int x = 1,
            sumPos, sumNeg;
    
    //Initialize or input i.e. set variable values
    sumPos = sumNeg = 0;
    
    //Map inputs -> outputs
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;

    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;

    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;

    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;

    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;

    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    //Display the outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cout<<"Negative sum = "<<setw(3)<<sumNeg<<endl;
    cout<<"Positive sum = "<<setw(3)<<sumPos<<endl;
    cout<<"Total sum    = "<<setw(3)<<sumNeg+sumPos;

    //Exit stage right or left!
    return 0;
}

