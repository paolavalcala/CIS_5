/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 20, 2024, 1:46 AM
 * Purpose: Fuel Efficiency Problem Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 
const float ltrsPGlln = 0.264179; //liters per gallon

//Function Prototypes
float clclteMPG(float liters, float miles);//decalring the calculatempg function

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float liters1, miles1, mpg1; // Car 1
    float liters2, miles2, mpg2; // Car 2
    char repeat;
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {
        // compute the number of miles per gallon.
        // mpg = clclteMPG(liters, miles); //calling the function
        
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liters1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles1;
        
        mpg1 = clclteMPG(liters1, miles1);
        cout<<"miles per gallon: "<<fixed<<setprecision(2)<<mpg1<<endl;
        cout<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liters2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles2;
        
        mpg2 = clclteMPG(liters2, miles2);
        cout<<"miles per gallon: "<<fixed<<setprecision(2)<<mpg2<<endl;
        cout<<endl;
        
        if (mpg1 > mpg2){
            cout<<"Car 1 is more fuel efficient"<<endl;
        }else{
            cout<<"Car 2 is more fuel efficient"<<endl;
        }
        cout<<endl;
        
        cout<<"Again:"<<endl;
        cin>>repeat;
        if(repeat == 'y')cout<<endl;
    }  while (repeat == 'y');

    //Exit stage right or left!
    return 0;
}

float clclteMPG(float liters, float miles) { //defining the function
    return miles / (liters * ltrsPGlln);
}