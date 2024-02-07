/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 7, 2024, 12:04 PM
 * Purpose: Find a value in an array Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int array[],int SIZE);
void prntAry(int array[],int SIZE, int);
bool linSrch(int array[],int SIZE,int indx,int& val);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    val=50;
    cout << "Enter " << SIZE << " random numbers: "<<endl;
    fillAry(array,SIZE);
    
    //Display the outputs
    cout << "here is your input:"<<endl; 
    prntAry(array,SIZE,10);
    if(linSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
    return 0;
}

void fillAry(int array[],int SIZE){
    for (int i = 0; i < SIZE; i++){
        array[i] = rand() % 80 + 20;
    }
}


void prntAry(int array[], int SIZE, int) {
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    cout << endl;
}


bool linSrch(int array[], int SIZE, int val, int& indx) {
    for (int i = 0; i < SIZE; i++) {
        if (array[i] == val) {
            indx = i;
            return true; // Value found
        }
    }
    return false; // Value not found
}