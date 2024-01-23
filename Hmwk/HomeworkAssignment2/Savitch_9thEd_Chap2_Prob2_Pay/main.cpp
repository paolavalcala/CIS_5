/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: Calculate the new compensation Problem
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
    short prevSlry = 2000; //previous annual salary 
    float retrPay; //Retroactive Pay for 6 months
    float newSlry; //new annual salary 
    float newMnth; //new monthly pay
    
    //Map inputs -> outputs
    retrPay = (prevSlry * 0.076f) / 2.0f;
    newSlry = (retrPay * 2.0f) + prevSlry;
    newMnth = newSlry / 12.0f;
    
    //Display the outputs
    cout<<"Input previous annual salary."<<endl;
    cout<<"Retroactive pay    = $"<<setw(7)<< setprecision(2) << fixed <<retrPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newSlry<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMnth;

    //Exit stage right or left!
    return 0;
}

