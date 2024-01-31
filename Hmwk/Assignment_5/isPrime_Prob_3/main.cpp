/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 31, 2024
 * Purpose: isPrime Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
bool isPrime(int num);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;

    //Process/Map inputs to outputs
    
    //Output data
    cout<<"Input a number to test if Prime."<<endl;
    
    //Initialize Variables
    cin>>num;
    
    if (isPrime(num)){
        cout<<num<<" is prime.";
    } else {
        cout<<num<<" is not prime.";
    }
    
    
    //Exit stage right!
    return 0;
}

bool isPrime(int num){
    //If not prime, return false.
    if (num <= 1) return false; // 0 and 1 are not prime

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false; // num is divisible by i, not prime
        }
    }
    //If prime, return true.
    return true; // n is prime
}
