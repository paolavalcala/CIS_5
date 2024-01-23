/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 11, 2024
 * Purpose: Utilize the iomanip Library
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
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    // short int1 = 1, int2 = 2, int3 = 3, int4 = 4;
    // float float1 = 1, float2 = 2, float3 = 3, float4 = 4;
    short num1 = 1, num2=2, num3=3, num4=4;
    
    //Initialize or input data here
    // cin >> int1 >> float1;
    // cin >> int2 >> float2;
    // cin >> int3 >> float3;
    // cin >> int4 >> float4;

    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    // cout << setw(9) << int1 << setw(10) << fixed << setprecision(1) 
    // << float1 << setw(10) << fixed << setprecision(2) << float1 << endl;
    
    // cout << setw(9) << int2 << setw(10) << fixed << setprecision(1) 
    // << float2 << setw(10) << fixed << setprecision(2) << float2 << endl;
    
    // cout << setw(9) << int3 << setw(10) << fixed << setprecision(1) 
    // << float3 << setw(10) << fixed << setprecision(2) << float3 << endl;
    
    // cout << setw(9) << int4 << setw(10) << fixed << setprecision(1) 
    // << float4 << setw(10) << fixed << setprecision(2) << float4;
    
    cout << setw(9) << num1 << setw(10) << fixed << setprecision(1) << static_cast<float>(num1)
         << setw(10) << fixed << setprecision(2) << static_cast<float>(num1) << endl;
    
    cout << setw(9) << num2 << setw(10) << fixed << setprecision(1) << static_cast<float>(num2)
         << setw(10) << fixed << setprecision(2) << static_cast<float>(num2) << endl;
    
    cout << setw(9) << num3 << setw(10) << fixed << setprecision(1) << static_cast<float>(num3)
         << setw(10) << fixed << setprecision(2) << static_cast<float>(num3) << endl;
    
    cout << setw(9) << num4 << setw(10) << fixed << setprecision(1) << static_cast<float>(num4)
         << setw(10) << fixed << setprecision(2) << static_cast<float>(num4);
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

