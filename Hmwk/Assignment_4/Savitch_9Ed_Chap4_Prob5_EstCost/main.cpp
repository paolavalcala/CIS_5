/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 20, 2024, 3:27 AM
 * Purpose: Estimated Cost Problem
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
float rtOfInltn(float itemcrrnt, float itemyrago);
float estPrice1Yr(float currentPrice, float inflationRate);
float estPrice2Yrs(float currentPrice, float inflationRate);

int main() {
    // Declare variables
    float itemcrrnt; // current price
    float itemyrago; // year ago price
    float infltnRt;
    char repeat;

    // Display the outputs
    do {
        cout<<"Enter current price:"<<endl;
        cin>>itemcrrnt;
        cout<<"Enter year-ago price:"<<endl;
        cin>>itemyrago;
        
        infltnRt = rtOfInltn(itemcrrnt, itemyrago);
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<infltnRt * 100 << "%" <<endl;
        cout<<endl;
        
        // Calculate estimated prices
        float estPrice1 = estPrice1Yr(itemcrrnt, infltnRt);
        float estPrice2 = estPrice2Yrs(itemcrrnt, infltnRt);
        
        cout<<"Price in one year: $"<<fixed << setprecision(2) << estPrice1 <<endl;
        cout<<"Price in two year: $"<<fixed << setprecision(2) << estPrice2<<endl;
        cout<<endl;
        
        cout<<"Again:"<<endl;
        cin>>repeat;
        if(repeat == 'y')cout<<endl;
    } while (repeat == 'y');

    return 0;
}

// Function to calculate the rate of inflation
float rtOfInltn(float itemcrrnt, float itemyrago) {
    return (itemcrrnt - itemyrago) / itemyrago;
}

// Function to calculate the estimated price in one year
float estPrice1Yr(float currentPrice, float inflationRate) {
    return currentPrice * (1 + inflationRate);
}

// Function to calculate the estimated price in two years
float estPrice2Yrs(float currentPrice, float inflationRate) {
    float estPrice1 = estPrice1Yr(currentPrice, inflationRate);
    return estPrice1 * (1 + inflationRate);
}