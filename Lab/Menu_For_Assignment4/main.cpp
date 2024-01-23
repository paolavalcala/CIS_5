/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 20, 2024, 6:40 PM
 * Purpose: Menu for Homework Assignment 4
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const float ltrsPGlln = 0.264179;

//Function Prototypes 
void case1();
void case2();
void case3();
void case4();
void case5();
void case6();
void case7();
void case8();
void case9();
void case10();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char menuItm;//Option to choose from menu
    unsigned short itmNum;//Number of options
    
    //The Process -> Map Inputs to Outputs
    menuItm = 10;//In this case we have 3 options
    
    do{
        //Display user choice
        cout<<"Choose from the options displayed"<<endl;
        cout<<"Input the problem number to run."<<endl;
        cout<<"Type 1 for Problem 1 Sum the Sequence Problem"<<endl;
        cout<<"Type 2 for Problem 2 Payment in Pennies Problem"<<endl;
        cout<<"Type 3 for Problem 3 Display the Largest and Smallest Problem"<<endl;
        cout<<"Type 4 for Problem 4 Rectangle with same number of rows as columns Problem"<<endl;
        cout<<"Type 5 for Problem 5 Display the following pattern Problem"<<endl;
        cout<<"Type 6 for Problem 6 MPG conversion Problem"<<endl;
        cout<<"Type 7 for Problem 7 Fuel Efficiency Problem"<<endl;
        cout<<"Type 8 for Problem 8 Rate of Inflation Problem"<<endl;
        cout<<"Type 9 for Problem 9 Estimated Cost Problem"<<endl;
        cout<<"Type 10 for Problem 10 Maximum of first 2 parameters then Maximum of 3 parameters Problem"<<endl;
        cout<<endl;
        cin>>itmNum;//Read in the option
        
        
        //Use a switch case to implement
        switch(itmNum){
            case 1:case1();break;
            case 2:case2();break;
            case 3:case3();break;
            case 4:case4();break;
            case 5:case4();break;
            case 6:case6();break;
            case 7:case7();break;
            case 8:case8();break;
            case 9:case9();break;
            case 10:case10();break;
             default:cout<<endl<<"Exiting the Menu"<<endl<<endl;
        }   
    }while(itmNum>0&&itmNum<=menuItm);
    
    //Exit the Program
    return 0;
}

void case1(){
    cout<<endl<<"Problem 1 Sum the Sequence Problem"<<endl<<endl;
        //Declare Variables
    int numDays;//number of days worked
    float sum = 0.01f;
    
    //Initialize or input i.e. set variable values
    cout << "Enter the number of days worked: ";
    cin>>numDays;
    
    //Map inputs -> outputs
    // Input Validation: Do not accept a number less than 1 for the number of days worked.
    while (numDays < 1) {
        cin>>numDays;
    }
    
    
    for (int day = 2; day <= numDays; ++day) { //each day starting at 2 leading up to total num of days
        sum *= 2;
    }
    
    //Display the outputs
    cout<<"Pay = $"<<fixed<<setprecision(2)<<sum<<endl<<endl;
    
}

void case2(){
    cout<<endl<<"Problem 2 Payment in Pennies Problem"<<endl<<endl;
    
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
    cout << "Pay = $" << dollars << "." << setw(2) << setfill('0') << cents << fixed << setprecision(2)<<endl<<endl;
}

void case3(){
    cout<<endl<<"Problem 3 Display the Largest and Smallest Problem"<<endl<<endl;
    
    //Declare Variables
    signed short large = 0;
    signed short small = 32760;
    signed short nums;
    signed short end = -99;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    // display the largest and smallest numbers entered.
    while (nums != end) {
        if (nums > large) {
            large = nums; // Update largest if a larger number is found
        }
        if (nums < small) {
            small = nums; // Update smallest if a smaller number is found
        }

        // Input: Get the next number
        cout << "Enter a series of numbers. Enter -99 to mark the end of the series: ";
        cin >> nums;
    }
    
    cout<<endl<<endl;
    //Display the outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large<<endl<<endl;
}

void case4(){
    cout<<endl<<"Problem 4 Rectangle with same number of rows as columns Problem"<<endl<<endl;
    
    //Declare Variables
    short num;
    char letter;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a positive integer (no greater than 15): ";
    cin>>num;
    
    cout << "Enter a letter from the alphabet: ";
    cin>>letter;
    
    //Map inputs -> outputs
    //input = a positive integer no greater than 15
    if (num <= 0 || num >= 15) {
        cout << "Invalid input. Please enter a positive integer less than 15." << endl;
    }
    
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            cout << letter;
        }
        if (i < num - 1) {  // excluding endl from the last row
            cout << endl;
        }
    }
    cout<<endl<<endl;
}

void case5(){
    cout<<endl<<"Problem 5 Display the following pattern Problem"<<endl<<endl;
    
    //Declare Variables
    short num;
    
    //Initialize or input i.e. set variable values
    while (true) {
        // Input a number
        cout << "Enter a number (or a number higher than 10 to exit): ";
        cin >> num;

        // Check if the input is higher than 10
        if (num > 10) {
            cout << "Exiting program..." << endl;
            break; // Exit the while loop
        }
    
    //Map inputs -> outputs
    //Display the outputs
        // Outputs an increase from 1 to 10
       for(int i = 1; i <= num; ++i){
           for(int j = 0; j < i; ++j){
               cout<<"+";
           }
           cout<<endl<<endl;
       }

       // decreases from 10 to 1
       for(int i = num; i >= 1; --i){
           for(int j = 0; j < i; ++j){
               cout<<"+";
           }
           if (i > 1) {
               cout<<endl<<endl;
           }
        }
    }
    cout<<endl<<endl;
}

float clclteMPG(float liters, float miles);

void case6(){
    cout<<endl<<"Problem 6 MPG conversion Problem"<<endl<<endl;
    
    //Declare Variables
    float liters;//  number of liters of gasoline consumed by the user’s car 
    float miles;// the number of miles traveled by the car
    float mpg;// output the number of miles per gallon the car delivered
    char repeat;
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liters;
        cout<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<endl;
        cout<<"miles per gallon:"<<endl;
        
        // compute the number of miles per gallon.
        mpg = clclteMPG(liters, miles);
        
        cout<<fixed<<setprecision(2)<<mpg<<endl;
        cout<<"Again: (y/n) ?"<<endl;
        cin>>repeat;
        if(repeat == 'y')cout<<endl;
    }  while (repeat == 'y');
    
    cout<<endl<<endl;

}

void case7(){
    cout<<endl<<"Problem 7 Fuel Efficiency Problem"<<endl<<endl;
    
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
    
    cout<<endl<<endl;
}

float clclteMPG(float liters, float miles) { //defining the function
    return miles / (liters * ltrsPGlln);
}

void case8(){
    cout<<endl<<"Problem 8 Rate of Inflation Problem"<<endl<<endl;
    
    short num;
    
    //Initialize or input i.e. set variable values
    while (true) {
        // Input a number
        cout << "Enter a number (or a number higher than 10 to exit): ";
        cin >> num;

        // Check if the input is higher than 10
        if (num > 10) {
            cout << "Exiting program..." << endl;
            break; // Exit the while loop
        }
    
    //Map inputs -> outputs
    //Display the outputs
        // Outputs an increase from 1 to 10
       for(int i = 1; i <= num; ++i){
           for(int j = 0; j < i; ++j){
               cout<<"+";
           }
           cout<<endl<<endl;
       }

       // decreases from 10 to 1
       for(int i = num; i >= 1; --i){
           for(int j = 0; j < i; ++j){
               cout<<"+";
           }
           if (i > 1) {
               cout<<endl<<endl;
           }
        }
    }
}

float rtOfInltn(float itemcrrnt, float itemyrago);
float estPrice1Yr(float currentPrice, float inflationRate);
float estPrice2Yrs(float currentPrice, float inflationRate);

void case9(){
    cout<<endl<<"Problem 9 Estimated Cost Problem"<<endl<<endl;
    
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
    
    cout<<endl<<endl;
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

float findMax (float param1, float param2);
float findMax (float param1, float param2, float param3);

void case10(){
    cout<<endl<<"Problem 10 Maximum of first 2 parameters then Maximum of 3 parameters Problem"<<endl<<endl;
    
    //Declare Variables
    float param1,
        param2,
        param3;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Enter first number:"<<endl;
    cin>>param1;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cin>>param2;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>param3;
    cout<<endl;
    
    float lrgst1 = findMax(param1, param2); 
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<lrgst1<<endl;
    cout<<endl;
    
    float lrgst2 = findMax(param1, param2, param3); 
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<fixed<<setprecision(1)<<lrgst2<<endl;
    
    cout<<endl<<endl;
}

float findMax(float param1, float param2) {
    return (param1 > param2) ? param1 : param2;
}

// Function to find the maximum of three parameters using recursion 
float findMax(float param1, float param2, float param3) {
    return findMax(findMax(param1, param2), param3);
}