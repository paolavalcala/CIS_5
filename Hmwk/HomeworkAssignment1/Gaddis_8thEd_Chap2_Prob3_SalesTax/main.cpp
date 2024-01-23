/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7, 2024
 * Purpose: Sales Tax Problem
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
    short purchase = 95; //total cost of purchase
    float state = 0.04; //state tax
    float county = 0.02; //county tax
    float salesTax; //total sales tax
    
    //Process or Map Solutions
    salesTax = (state + county) * purchase;
    
    //Display the output
    cout<<"The total sales tax on a $"<<purchase<<" purchase is "<<salesTax<<endl;
    
    //Exit the program
    return 0;
}

