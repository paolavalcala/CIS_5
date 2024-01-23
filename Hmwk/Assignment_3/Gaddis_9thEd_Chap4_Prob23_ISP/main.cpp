/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 14, 2024, 6:15 PM
 * Purpose: What is my internet bill? Problem
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
    char package = 'A';
    float hours = 11;
    float bill; 
    
    //Map inputs -> outputs
//     Package A: For $9.95 per month 10 hours of access are provided. Additional hours are $2.00 per hour.
    if (package == 'A'){
        bill = 9.95 + max(0.0f, hours - 10) * 2.00;
    }
    // Package B: For $14.95 per month, 20 hours of access are provided. Additional hours are $1.00 per hour.
    else if (package == 'B') {
        bill = 14.95 + max(0.0f, hours - 20) * 1.00;
    }
    // Package C: For $19.95 per month, unlimited access is provided.
    else {
        bill = 19.95;
    }
    
    //Display the outputs
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cout<<"Bill = $ "<<fixed << setprecision(2)<<bill;

    //Exit stage right or left!
    return 0;
}

