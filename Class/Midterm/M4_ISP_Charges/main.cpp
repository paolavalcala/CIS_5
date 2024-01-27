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
    char package;
    unsigned short hours;
    float charge;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    package = tolower(package);
    
    
    if (package == 'a') { //package a:
      if (hours <= 10){//16.99 = 10 hours
          charge = 16.99;
      } else if (hours <= 20){// hours > 10 && hours <= 20 == 0.95
          charge = 16.99 + 0.95 * (hours - 10);
      }else{ // hours < 20 == 16.99 + 0.95 + 0.85 for all additional hours
          charge = 16.99 + 0.95 * 10 + 0.85 * (hours - 20);
      }
    }   
    
    else if (package == 'b') {//package b: 
        if (hours <= 20) {// 26.99 = 20 hours 
             charge = 26.99;
         } else if (hours <= 30) {//hours > 20 && hours <= 30 == 0.74
            charge = 26.99 + 0.74 * (hours - 20);
         } else {
            charge = 26.99 + 0.74 * 10 + 0.64 * (hours - 30);//hours > 30 == 26.99 + 0.74 + 0.64 * each hour above 30 
        }
    }
    
    else if (package == 'c') {//package c:
        charge = 36.99; // 36.99 = 0 hours 
    }
    
    //Output the Charge
    cout << fixed << setprecision(2);
    cout << "$" << charge << " ";
    

    //Output the cheapest package and the savings
    float savings = 0.00;
    char chpstPckg = ' ';
    
    //a is cheapest when 10 ours and 20 hours 
    //10 hours = 16.99 cheaper than b and c
    //20 hours is 26.49 cheaper than b and c 
    //30 hours is 34.99 
    //32 hours is 36.69 cheaper than c and b
    //40 hours is 43.49
    //additional hours = (hours -20) * 0.85 this price has to be compared to all the othe prices in the other packages depending on hours inputed 
    
    //b is cheapest when 30 hours
    // 20 hours is 26.99 more expensive than a but cheaper than c 
    //30 hours is 34.39 cheaper than a and c 
    //40 hours 40.79
    //additional hours =  (hours - 30) * 0.64
    
    //c is 36.99 cheapest at 40 hours 
    // calculate hours between 30 and 40 to figure out when exactly package c becomes the cheapest option

    //compare prices based off of hours inputed 
    
    if (hours <= 10) {
        chpstPckg = 'A';
    } else if (hours <= 20) {
        float a_savings = charge - (16.99 + 0.95 * (hours - 10));
        if (a_savings < savings || savings == 0.00) {
            savings = a_savings;
            chpstPckg = 'A';
        }
    } else if (hours <= 30) {
        float b_savings = charge - (26.99 + 0.74 * (hours - 20));
        if (b_savings < savings || savings == 0.00) {
            savings = b_savings;
            chpstPckg = 'B';
        }
    } else if (package == 'c') {
        float c_savings = charge - (36.99 + 0.64 * (hours - 30));
        if (c_savings < savings || savings == 0.00) {
            savings = c_savings;
            chpstPckg = 'C';
        }
    }

    
    cout << chpstPckg << " $" << savings << endl;

    
        
    //Exit
    return 0;
}