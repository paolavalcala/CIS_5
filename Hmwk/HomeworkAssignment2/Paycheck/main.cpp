/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: What does various forms of output look like in Code-E Problem
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
    //Declare a Variable, i.e. an integer
    int number = 1;
    int number2 = 6;
    //Display various output results in Code-E
    //8 Spaces with a new line
    cout<<"        "<<endl;
    //8 Spaces with a new line
    cout<<"        \n";
    //A Tab with 8 Spaces and a new line
    cout<<"\t     \n";
    //Read the value of a number as input and output twice separated by 6 spaces
    cout<<number<<"      "<<number<<endl;
    //Read another number as input then  output twice separated by 6 spaces
    cout<<number2<<setw(7)<<number2<<endl;
    //Exit stage right or left!
    return 0;
}

