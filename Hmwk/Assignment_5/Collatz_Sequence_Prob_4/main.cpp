/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 31, 2024
 * Purpose: Collatz Sequence Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
    
    //Output data
    
    //Exit stage right!
    return 0;
}

int collatz(int n){
    int steps = 0; // Count from the start of the sequence to the end and output its length.

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2; // When even divide by 2
        } else {
            n = 3 * n + 1; //when odd multiply by 3 and add 1;
        }
        steps++;
    }
    steps++;

    return steps;
}