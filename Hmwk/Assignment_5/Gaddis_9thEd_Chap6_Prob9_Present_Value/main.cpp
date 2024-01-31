/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 31, 2024
 * Purpose: Calculate the present value Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float psntVal(float ftrVal,float intrstRt,int numYrs);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float ftrVal, intrstRt;
    int numYrs;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>ftrVal;
    
    cout<<"Input the Number of Years"<<endl;
    cin>>numYrs;
    
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>intrstRt;
    
    float prsnt = psntVal(ftrVal, intrstRt, numYrs);
    
    cout<<"The Present Value = $" << fixed << setprecision(2) << prsnt;
    
    //Exit stage right or left!
    return 0;
}

float psntVal(float ftrVal,float intrstRt,int numYrs){
    // Calculate present value using the formula P = F / (1 + r)^n
    float result = ftrVal / pow(1 + intrstRt / 100, numYrs);
    return result;
}