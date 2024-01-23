/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 14, 2024, 2:38 PM
 * Purpose: Sort the Names using string compare Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string name1 = "Charly", name2 = "Leslie", name3 = "Andy";
    
    //Map inputs -> outputs
    //sorting the first letter of the name based off ascii code index value based off of the bubble sort
    if (name1 > name2){
        swap(name1, name2);
    }
    if (name2 > name3){
        swap(name2, name3);
    }
    if (name1 > name2){
        swap(name1, name2);
    }
    
    
    //Display the outputs
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cout<<name1<<endl;
    cout<<name2<<endl;
    cout<<name3;

    //Exit stage right or left!
    return 0;
}

