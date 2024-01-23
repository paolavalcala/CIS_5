/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 18, 2024, 1:21 PM
 * Purpose: Sales Bar Chart Lab Assignment 
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all variables
    short sales1,
        sales2,
        sales3,
        sales4,
        sales5;
    
    //Initialize all variables
    cout<<"Enter today's sales for store 1:"<<endl;
    cin>>sales1;
    
    cout<<"Enter today's sales for store 2:"<<endl;
    cin>>sales2;
    
    cout<<"Enter today's sales for store 3:"<<endl;
    cin>>sales3;
    
    cout<<"Enter today's sales for store 4:"<<endl;
    cin>>sales4;
    
    cout<<"Enter today's sales for store 5:"<<endl;
    cin>>sales5;
    
    //Process or Map Solutions
    // Display the output
    
    //    SALES BAR CHART (Each * = $100)
    cout << "Store 1: ";
    int i = 0;
    while (i < sales1 / 100) {
        cout << "*";
        i++;
    }
    cout << endl;

    cout << "Store 2: ";
    i = 0;  // Reset i for the next store
    while (i < sales2 / 100) {
        cout << "*";
        i++;
    }
    cout << endl;

    cout << "Store 3: ";
    i = 0;
    while (i < sales3 / 100) {
        cout << "*";
        i++;
    }
    cout << endl;

    cout << "Store 4: ";
    i = 0;
    while (i < sales4 / 100) {
        cout << "*";
        i++;
    }
    cout << endl;

    cout << "Store 5: ";
    i = 0;
    while (i < sales5 / 100) {
        cout << "*";
        i++;
    }
    cout << endl;

    // Exit the program
    return 0;
}
