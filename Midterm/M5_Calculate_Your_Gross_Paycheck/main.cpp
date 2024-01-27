/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 25, 2024
 * Purpose: Calculate the Bill ! Problem 
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes Here
string cnvrtToEng(int num);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float totalPay = 0.0;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    //if hours worked = 20 then pay rate is pay rate * hours worked
    // if hours worked > 20 and hours worked < 40 then pay rate is over time hours worked * 1.5 * reg pay rate
    // if hours worked > 40 then pay rate is over time hours worked * 2 * reg pay rate

    if (hrsWrkd <= 20) {
        // Straight time for the first 20 hours
        totalPay = payRate * hrsWrkd;
    } else if (hrsWrkd > 20 && hrsWrkd <= 40) {
        // Time and a half for hours worked in excess of 20 but less than or equal to 40
        totalPay = 20 * payRate + (hrsWrkd - 20) * 1.5 * payRate;
    } else {
        // Double time for hours worked over 40
        totalPay = 20 * payRate + 20 * 1.5 * payRate + (hrsWrkd - 40) * 2 * payRate;
    }
    
    //Output the check
    cout<<fixed<<setprecision(2)<<"$"<<totalPay<<endl;
    
    //Exit
    return 0;
}