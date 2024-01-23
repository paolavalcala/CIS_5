/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 16, 2024, 10:10 PM
 * Purpose: Sum the Sequence Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main() {
    // Declare Variables
    unsigned int pyPDay, paySum; // pay per day and daily sum
    unsigned short nDays;

    // Initialize or input i.e. set variable values
    pyPDay = 1;
    paySum = 0;

    // Input with validation
    do {
         cout << "Enter the number of days worked (must be 1 or greater): ";
        cin >> nDays;
    } while (nDays < 1);

    // Map inputs -> outputs
    for (int day = 1; day <= nDays; day++) {
        paySum += pyPDay;
        pyPDay *= 2;
    }

    // Display the outputs
    int dollars = paySum / 100;
    int cents = paySum % 100;
    cout << "Pay = $" << dollars << "." << setw(2) << setfill('0') << cents << fixed << setprecision(2);

    // Exit stage right or left!
    return 0;
}




//int main(int argc, char** argv) {
//    //Set the random number seed
//    
//    //Declare Variables
//    int posInt;//positive integer value 
//    int sum = 0;
//    
//    //Initialize or input i.e. set variable values
//    cout<<"Enter a positive integer."<<endl;
//    cin >> posInt;
//    
//    //Map inputs -> outputs
//    while (posInt <= 0) {
//        cin >> posInt;
//    }
//    
//    for (int i = 1; i <= posInt; ++i){
//        sum += i;
//    }
//    
//    //Display the outputs
//    cout<<"Sum = "<<sum;
//
//    //Exit stage right or left!
//    return 0;
//}

