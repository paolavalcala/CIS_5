/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024, 8:04 PM
 * Purpose: Counting Calories Problem
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
    //Set the random number seed
    
    //Declare Variables
    short cookies=40,
        servs=10,
        cals=300,
        singleServ,
        cooksEaten = 4;
    
    //Initialize or input i.e. set variable values
//    cin>>cooksEaten;
    
    //Map inputs -> outputs
    singleServ = cookies / servs;
    cals = (cooksEaten * (cals / singleServ));
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed " << cals << " calories.";

    //Exit stage right or left!
    return 0;
}

