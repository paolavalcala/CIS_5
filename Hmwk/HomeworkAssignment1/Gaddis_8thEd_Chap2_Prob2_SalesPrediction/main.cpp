/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7, 2024
 * Purpose: Sales Prediction Problem
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
    int sales = 86000000; //8.6 million in company sales
    double percent = 0.58; //58 percent of total company sales
    double divSales; //east coast sales division sales
    
    //Process or Map Solutions
    divSales = sales * percent;
    
    //Display the output
    cout<<"The East Coast division will generate $"<<divSales<<" in sales this year."<<endl;
    
    //Exit the program
    return 0;
}