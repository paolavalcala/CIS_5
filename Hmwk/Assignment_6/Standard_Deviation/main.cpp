/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 6, 2024, 11:40 PM
 * Purpose: Calculate the Standard Deviation Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    cout << "Enter 20 different decimal values: ";
    init(test, SIZE);
    
    // Display the input
    cout << fixed << setprecision(7); 
    cout << "Here is your input:" << endl;
    print(test, SIZE, 5);
    //Display the outputs
    
    cout << fixed << setprecision(7); 
    cout<<"The average            = " << avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}


void init(float test[], int SIZE) {
    int count = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (count % 5 == 0 && count != 0)
            cout << endl;
        cin >> test[i];
        cout << setw(10);
        count++;
    }
    cout << endl;
}

void print(float test[], int SIZE, int n) {
    for (int i = 0; i < SIZE; ++i) {
        cout<<test[i] << " ";
        if ((i + 1) % n == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

float avgX(float test[], int SIZE) {
    float sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += test[i];
    }
    return sum / SIZE;
}

float stdX(float test[], int SIZE) {
    float mean = avgX(test, SIZE);
    float sumSquaredDiff = 0;
    for (int i = 0; i < SIZE; ++i) {
        sumSquaredDiff += pow(test[i] - mean, 2);
    }
    return sqrt(sumSquaredDiff / (SIZE - 1));
}