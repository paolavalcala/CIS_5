/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 31, 2024
 * Purpose: Min Max Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
void minmax(int num1,int num2,int num3,int& min,int& max);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    short num1, num2, num3;
    int min, max;
      
    //Output data
    cout<<"Input 3 numbers"<<endl;
    //Initialize Variables
    cin>>num1>>num2>>num3;
    
    //Process/Map inputs to outputs
    minmax(num1, num2, num3, min, max);
    
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    
    //Exit stage right!
    return 0;
}

void minmax(int num1,int num2,int num3,int& min,int& max){
    // find min
    min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;

    // find max
    max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
}