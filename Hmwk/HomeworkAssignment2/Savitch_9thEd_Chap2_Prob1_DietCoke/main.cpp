/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: How many cans of diet coke can I consume before losing all my weight? Problem
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
    float kMouse = 5.0f; // amount to kill a mouse in grams
    float mMass = 35.0f; // mass of a mouse in grams
    float sweetener = 0.001f; // fraction of artificial sweetener in diet soda
    float canMass = 350.0f; // mass of a soda can in grams
    float dieterW = 200, //dieter weight in lbs
        maxCans;
    
    //Map inputs -> outputs
    maxCans = (dieterW * 453.592f * kMouse) / (canMass * sweetener * mMass);
    
    //Display the outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<< static_cast<int>(maxCans) <<" cans";

    //Exit stage right or left!
    return 0;
}

