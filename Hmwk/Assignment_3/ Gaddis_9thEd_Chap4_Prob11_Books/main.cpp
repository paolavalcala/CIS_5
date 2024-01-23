/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 14, 2024, 2:38 PM
 * Purpose: Book worm Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    short bksPrchsd = 9;
    short pntsErnd;
    
    //Map inputs -> outputs
    if (bksPrchsd == 0) {
        pntsErnd = 0;
    } else if (bksPrchsd == 1) { //1 book = 5 Points
        pntsErnd = 5;
    } else if (bksPrchsd == 2) {//2 books = 15 points 
        pntsErnd = 15;
    } else if (bksPrchsd == 3) {//3 books = 30 Points
        pntsErnd = 30;
    } else if (bksPrchsd >= 4) {//4 books = 60 points
        pntsErnd = 60;
    }
    
    //Display the outputs
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cout<<"Books purchased =  "<<bksPrchsd<<endl;
    cout<<"Points earned   = "<<pntsErnd;

    return 0;
}