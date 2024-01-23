/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 14, 2024, 5:40 PM
 * Purpose: Place the runners Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string names[] = {"Jack", "Jim", "John"};
    int times[] = {100, 101, 99};
    
    //Map inputs -> outputs
    if (times[0] > times[1]) {
        swap(times[0], times[1]);
        swap(names[0], names[1]);
    }
    if (times[1] > times[2]) {
        swap(times[1], times[2]);
        swap(names[1], names[2]);
    }
    if (times[0] > times[1]) {
        swap(times[0], times[1]);
        swap(names[0], names[1]);
    }
    
    //Display the outputs
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cout<<names[0]<<"\t"<<setw(3)<<times[0]<<endl;
    cout<<names[1]<<"\t"<<setw(3)<<times[1]<<endl;
    cout<<names[2]<<"\t"<<setw(3)<<times[2];

    //Exit stage right or left!
    return 0;
}