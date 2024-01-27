/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 25, 2024
 * Purpose: Series Calculation Problem 
 */

//System Libraries
//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float factorial(int n);// Function to calculate factorial

float clcltTrm(float x, int power);// Function to calculate the series term

float clcltSrs(float x, int nterms); // Function to calculate the series sum

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    // if term = 1 then fx = 1
    // f(x)=x-x^3/3!+x^5/5!-x^7/7!+.......
    // which would look like term = x - ((x*x*x)/(1*2*3)) + ((x*x*x*x*x)/(1*2*3*4*5)) - ((x*x*x*x*x*x*x)/1*2*3*4*5*6*7) + ...
    // terms increase by odd numbers
    //subtraction and addition in between terms alternates each iteration 
    //how do I make this code modular?
    //I can create a function that calculates the terms to fit the pattern 
    
    // if (nterms == 1) {
    //     term = x; // x
    //     fx = term;
    // } else if {
    //     for (int i = 1; i <= nterms; i += 2) {
    //         term = x - (pow(x, i) / (fact*=i));
    //         fx += term;
    //     }
    // }
    
    
   float result = clcltSrs(x, nterms);
    
    //Output the result here
    cout << fixed << setprecision(6) << result <<endl;
    
    //Exit
    return 0;
    
    

}


float factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


float clcltTrm(float x, int power) {
    return pow(x, power) / factorial(power);
}


float clcltSrs(float x, int nterms) {
    float fx = 0.0;

    for (int i = 0; i < nterms; i++) {
        int power = 2 * i + 1;
        if (i % 2 == 0) {
            fx += clcltTrm(x, power);
        } else {
            fx -= clcltTrm(x, power);
        }
    }

    return fx;
}