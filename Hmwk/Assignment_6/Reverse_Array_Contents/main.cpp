/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 6, 2024, 11:32 PM
 * Purpose: Create a Product Table Problem
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

//Function Prototypes
void  init(int test[],int SIZE);//Initialize the array
void  revrse(int test[],int SIZE, int rev[]);;//Reverse the array
void  print(int arr[],int SIZE,int n);//Print the array



//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    int revArr[SIZE];
    
    //Initialize or input i.e. set variable values
    cout << "Enter " << SIZE << " random numbers: "<<endl;
    init(test, SIZE);

    
    //Display the outputs
    
    //Reverse the Values
    revrse(test,SIZE, revArr);
    
    //Display the outputs
    cout << "Original Array:" << endl;
    print(test, SIZE, 10);
    cout << "Reversed Array:" << endl;
    print(revArr, SIZE, 10);

    //Exit stage right or left!
    return 0;
}


void  init(int test[],int SIZE){
    for (int i = 0; i < SIZE; ++i) {
        test[i] = rand() % 80 + 20;
    }
}


void revrse(int test[], int SIZE,int rev[]) {
    int start = 0;
    int end = SIZE - 1;
    while (start < end) {
        // Swap elements at start and end indices
        int temp = test[start];
        rev[start] = test[end];
        rev[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

void print(int arr[], int SIZE, int n) {
    
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
        if ((i + 1) % n == 0) {
            cout << endl;
        }
    }
}


