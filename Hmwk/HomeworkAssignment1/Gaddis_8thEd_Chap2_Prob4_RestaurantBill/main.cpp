/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7, 2024
 * Purpose: Restaurant Bill Problem
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
    float meal = 88.67; //cost of meal
    float taxRate = 0.0675; //6.75 percent as a decimal
    float tipRate = 0.20; //20 percent as a decimal 
    float tax , tip, bill; //total cost of meal + tax + tip
    
    //Process or Map Solutions
    tax = meal * taxRate;
    tip = (meal + tax) * tipRate;
    bill = meal + tax + tip;
    
    //Display the output
    cout<<"Meal cost: $"<<meal<<endl;
    cout<<"Tax amount: "<<tax<<endl;
    cout<<"Tip amount: $"<<tip<<endl;
    cout<<"Total bill: $"<<bill<<endl;
    
    //Exit the program
    return 0;
}

