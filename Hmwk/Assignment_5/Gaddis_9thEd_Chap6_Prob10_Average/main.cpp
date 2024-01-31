/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 31, 2024
 * Purpose: Calculate the present value Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void getScre(int &scr1, int &scr2, int &scr3, int &scr4, int &scr5);

float calcAvg(int scr1,int scr2,int scr3,int scr4,int scr5);

int fndLwst(int scr1,int scr2,int scr3,int scr4,int scr5);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int scr1, scr2, scr3, scr4, scr5; //5 test scores
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    cout<<"Input the 5 test scores."<<endl;
    
    getScre(scr1, scr2, scr3, scr4, scr5);
    
    cout<<"The average test score = " << fixed << setprecision(1) << calcAvg(scr1, scr2, scr3, scr4, scr5);

    
    //Exit stage right or left!
    return 0;
}


void getScre(int &scr1, int &scr2, int &scr3, int &scr4, int &scr5){
    // Get input for each test score and validate the range
    if (scr1 < 1 || scr1 > 100) {
        do {
            cin >> scr1;
        } while (scr1 < 1 || scr1 > 100);
    }

    if (scr2 < 1 || scr2 > 100) {
        do {
            cin >> scr2;
        } while (scr2 < 1 || scr2 > 100);
    }

    if (scr3 < 1 || scr3 > 100) {
        do {
            cin >> scr3;
        } while (scr3 < 1 || scr3 > 100);
    }

    if (scr4 < 1 || scr4 > 100) {
        do {
            cin >> scr4;
        } while (scr4 < 1 || scr4 > 100);
    }

    if (scr5 < 1 || scr5 > 100) {
        do {
            cin >> scr5;
        } while (scr5 < 1 || scr5 > 100);
    }
}


float calcAvg(int scr1,int scr2,int scr3,int scr4,int scr5){
    // Call function to find the lowest score
    int lowest = fndLwst(scr1, scr2, scr3, scr4, scr5);

    // Calculate the sum of the four highest scores
    int sum = scr1 + scr2 + scr3 + scr4 + scr5 - lowest;

    // Calculate and return the average
    return static_cast<float>(sum) / 4;
}


int fndLwst(int scr1,int scr2,int scr3,int scr4,int scr5){
    // Find and return the lowest score
    int lowest = scr1;

    if (scr2 < lowest) lowest = scr2;
    if (scr3 < lowest) lowest = scr3;
    if (scr4 < lowest) lowest = scr4;
    if (scr5 < lowest) lowest = scr5;

    return lowest;
}