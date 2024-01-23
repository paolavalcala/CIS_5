/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 7
 * Purpose: Cyborg Data Type Sizes Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Process or Map Solutions
    int szChar = sizeof(char); //size of char
    int szInt = sizeof(int); //size of int
    int szFloat = sizeof(float); //size of float
    int szDouble = sizeof(double); //size of double
    
    //Display the output
    cout<<"Size of char: " << szChar << " bytes" <<endl;
    cout<<"Size of int: " << szInt << " bytes" <<endl;
    cout<<"Size of float: " << szFloat << " bytes" <<endl;
    cout<<"Size of double: " << szDouble << " bytes" <<endl;
    
    //Exit the program
    return 0;
}

