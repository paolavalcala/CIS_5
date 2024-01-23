/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: Use the trig functions! Problem
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
    float angle = 45, sine, cosine, tangent;
    
    //Map inputs -> outputs
    double angleRad = angle * M_PI / 180.0;
    sine = sin(angleRad);
    cosine = cos(angleRad);
    tangent = tan(angleRad);
    
    //Display the outputs
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cout<<"sin("<< setprecision(0) << fixed<<angle<<") = "<< setprecision(4) << fixed << sine<<endl;
    cout<<"cos("<< setprecision(0) << fixed<<angle<<") = "<< setprecision(4) << fixed << cosine<<endl;
    cout<<"tan("<< setprecision(0) << fixed<<angle<<") = "<< setprecision(4) << fixed << tangent;

    //Exit stage right or left!
    return 0;
}

