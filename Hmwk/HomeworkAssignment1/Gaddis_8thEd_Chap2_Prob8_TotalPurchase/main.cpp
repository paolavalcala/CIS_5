/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7, 2024
 * Purpose: Total Purchase Problem
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
    float itemA = 15.95; //item 1 price
    float itemB = 24.95; //item 2 price
    float itemC = 6.95; //item 3 price
    float itemD = 12.95; //item 4 price
    float itemE = 3.95; //item 5 price
    float tax = 0.07; //7 percent sales tax
    float subtotal, total;
    
    //Process or Map Solutions
    subtotal = itemA + itemB + itemC + itemD + itemE;
    total = (subtotal * tax) + subtotal;
    
    //Display the output
    cout<<"Price of item 1 = $"<<itemA<<endl;
    cout<<"Price of item 2 = $"<<itemB<<endl;
    cout<<"Price of item 3 = $"<<itemC<<endl;
    cout<<"Price of item 4 = $"<<itemD<<endl;
    cout<<"Price of item 5 = $"<<itemE<<endl;
    cout<<"Sales Tax: "<<tax<<endl;
    cout<<"subtotal: $"<<subtotal<<endl;
    cout<<"total: $"<<total<<endl;
    
    //Exit the program
    return 0;
}

