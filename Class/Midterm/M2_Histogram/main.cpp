/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 25, 2024
 * Purpose: Create a Histogram Problem 
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char digit1, digit2, digit3, digit4;

    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;

    cin>>digit1>>digit2>>digit3>>digit4;
    
    //Histogram Here
     cout << digit4 << " ";
    if (isdigit(digit4)) {
        int digit = digit4 - '0';
        for (int j = 0; j < digit; ++j) {
            cout << "*";
        }
    } else {
        cout << "?";
    }
    cout << endl;

    cout << digit3 << " ";
    if (isdigit(digit3)) {
        int digit = digit3 - '0';
        for (int j = 0; j < digit; ++j) {
            cout << "*";
        }
    } else {
        cout << "?";
    }
    cout << endl;

    cout << digit2 << " ";
    if (isdigit(digit2)) {
        int digit = digit2 - '0';
        for (int j = 0; j < digit; ++j) {
            cout << "*";
        }
    } else {
        cout << "?";
    }
    cout << endl;

    cout << digit1 << " ";
    if (isdigit(digit1)) {
        int digit = digit1 - '0';
        for (int j = 0; j < digit; ++j) {
            cout << "*";
        }
    } else {
        cout << "?";
    }
    cout << endl;

    // Exit
    return 0;
}