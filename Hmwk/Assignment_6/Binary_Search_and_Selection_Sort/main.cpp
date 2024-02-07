/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 7, 2024, 12:17 PM
 * Purpose: Use a binary search to find a value Problem
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
void selSrt(int array[],int val);
bool binSrch(int array[],int SIZE,int indx,int& val);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    cout << "Enter " << SIZE << " random numbers: "<<endl;
    fillAry(array,SIZE);

    //Sorted List
    selSrt(array,SIZE);
    
    //Display the outputs
    cout << "here is your output:"<<endl;
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
        array[i] = rand() %90 + 10;
    }
}


void prntAry(int array[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    cout << endl;
}



void selSrt(int array[], int SIZE) {
    for (int i = 0; i < SIZE - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}


bool binSrch(int array[], int SIZE, int val, int& indx) {
    int left = 0;
    int right = SIZE - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // if the value is present at the middle
        if (array[mid] == val) {
            indx = mid;
            return true; // Value found
        }
        // If the value is greater ignore the left half
        else if (array[mid] < val) {
            left = mid + 1;
        }
        // If the value is smaller ignore the right half
        else {
            right = mid - 1;
        }
    }
    // If we reach her, then the element was not present
    return false;
}