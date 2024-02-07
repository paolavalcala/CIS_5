/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 7, 2024, 12:34 PM
 * Purpose: Find a value after Sorting Problem
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
void prntAry(int array[],int SIZE);
void bublSrt(int array[],int SIZE);
bool binSrch(int array[],int SIZE,int val,int& indx);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    cout << "here is your output:"<< endl;
    prntAry(array,SIZE);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}


void fillAry(int array[],int SIZE){
    for (int i = 0; i < SIZE; i++){
        array[i] = rand() % 90 + 10;
    }
}


void prntAry(int array[],int SIZE){
    for (int i = 0; i < SIZE; i++){
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0)
        cout << endl;
    }
    cout << endl;
}


void bublSrt(int array[],int SIZE){
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap the elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}


bool binSrch(int array[],int SIZE,int val,int& indx){
    int left = 0;
    int right = SIZE - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Check if the value is present at the middle
        if (array[mid] == val) {
            indx = mid;
            return true; // Value found
        }
        // If the value is greater, ignore the left half
        else if (array[mid] < val) {
            left = mid + 1;
        }
        // If the value is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    // If we reach here, then the element was not present
    return false;
}