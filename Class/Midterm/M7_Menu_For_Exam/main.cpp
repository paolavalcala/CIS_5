/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 25, 2024
 * Purpose: Menu for Exam Problem 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    switch (shape) {
        case 'f': // forward slash
            if (x % 2 == 0){ //even 
                for (int i = x; i >= 1; i--) { //starts counting at x
                    for (int j = 1; j <= x; j++) { //starts counting at 1
                        if (j == i) { // if j is positioned where i is 
                            cout << i; // print value at index
                        } else {
                            cout << " ";//else print space 
                        }
                    }
                    cout << endl;
                }
            }  else { //odd starts counting at 1
                for (int i = 1; i <= x; i++) {
                    for (int j = 1; j <= x; j++) {
                        if (j == x - i + 1) {
                            cout << i;
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }
            break;
        case 'b': // backward slash even 
            if (x % 2 == 0){ //even counts starting from 1
               for (int i = 1; i <= x; i++){ //if i <= x is true increment row
                   for (int j = 1; j <= x; j++){ //if i<= x is true increment column
                        if (i == j) { // if i and j in same position 
                            cout << i;//print the number at the index
                        } else {
                            cout << " "; //else print a space 
                        }
                    }
                   cout<<endl;
                }
            } else {   //backward slash odd
                for (int i = x; i >= 1; i--) { //odd counts starting from x
                    for (int j = 1; j <= x; j++) {
                        if (j == x - i + 1) {
                            cout << i; 
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }    
            break;
        case 'x': // cross
                    if (x % 2 == 0) { // even
                        for (int i = x; i >= 1; i--) {
                            for (int j = 1; j <= x; j++) {
                                if (i == j || j == x - i + 1) {
                                    if (j == x - i + 1 && j != i) {
                                        cout << j;
                                    } else {
                                        cout << i;
                                    }
                                } else {
                                    cout << " ";
                                }
                            }
                            cout << endl;
                        }
                    } else { // odd
                        for (int i = x; i >= 1; i--) {
                            for (int j = 1; j <= x; j++) {
                                if (i == j || j == x - i + 1) {
                                    if (j == x - i + 1 && j != x - i + 1) { 
                                        cout << i;
                                    } else {
                                        cout << j;
                                    }
                                } else {
                                    cout << " ";
                                }
                            }
                            cout << endl;
                        }
                    }
                    break;
    }
    
}

void problem2(){
    //Declare all Variables Here
    char digit1, digit2, digit3, digit4;

    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;

    cin>>digit1>>digit2>>digit3>>digit4;
    
    //Histogram Here
     cout << digit4 << " ";
    if (isdigit(digit4)) {
        int digit = digit4 - '0';
        for (int j = 0; j < digit; ++j) {
            cout << "*";
        }
    } else {
        cout << "?";
    }
    cout << endl;

    cout << digit3 << " ";
    if (isdigit(digit3)) {
        int digit = digit3 - '0';
        for (int j = 0; j < digit; ++j) {
            cout << "*";
        }
    } else {
        cout << "?";
    }
    cout << endl;

    cout << digit2 << " ";
    if (isdigit(digit2)) {
        int digit = digit2 - '0';
        for (int j = 0; j < digit; ++j) {
            cout << "*";
        }
    } else {
        cout << "?";
    }
    cout << endl;

    cout << digit1 << " ";
    if (isdigit(digit1)) {
        int digit = digit1 - '0';
        for (int j = 0; j < digit; ++j) {
            cout << "*";
        }
    } else {
        cout << "?";
    }
    cout << endl;
    
}

string cnvrtToEng(int num);

void problem3(){
    //Declare all Variables Here
    unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    
    //Output the check value
    
    cout<<cnvrtToEng(number)<<"and no/100's Dollars"<<endl;
    
}

string cnvrtToEng(int num) {
    //digits 1- 9 represents i + 1
    const string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    //digits 11 - 19 represents i + 10
    const string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    //digits 10 - 90 represents (i+1) * 10
    const string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string result; //result string
    
    //Calculate the 1000's, 100's, 10's and 1's
    
    if (num >= 1000) { //if num falls in 1000s
        result += ones[num / 1000] + " Thousand "; //find first digit and look up in ones array and append to result string
        num %= 1000; //remove 1000 place from num to handle remaining digits
    }

    if (num >= 100) { //if num falls in 100s
        result += ones[num / 100] + " Hundred "; //find first digit and look up in one array and append to result string
        num %= 100; //remove 100 place from num to handle remaining digits
    }

    if (num >= 20) { //if num falls in tens is true
        result += tens[num / 10] + " "; //find digit and look up english name in tens array 
        num %= 10; //remove 10 place from num 
    } else if (num >= 11) {  //if flase num falls in teens
        result += teens[num - 10] + " "; //find digit and look up in teens array
        num = 0;  // Skip the ones place
    }

    if (num > 0) {
        result += ones[num] + " ";
    }
    
    return result;
}    
    

void problem4(){
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

    
}

void problem5(){
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float totalPay = 0.0;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    

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
}

float factorial(int n);

float clcltTrm(float x, int power);// Function to calculate the series term

float clcltSrs(float x, int nterms); // Function to calculate the series sum

void problem6(){
    //Declare all Variables Here
    float x;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    
   float result = clcltSrs(x, nterms);
    
    //Output the result here
    cout << fixed << setprecision(6) << result <<endl;

    
}


float factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


float clcltTrm(float x, int power) {
    return pow(x, power) / factorial(power);
}


float clcltSrs(float x, int nterms) {
    float fx = 0.0;

    for (int i = 0; i < nterms; i++) {
        int power = 2 * i + 1;
        if (i % 2 == 0) {
            fx += clcltTrm(x, power);
        } else {
            fx -= clcltTrm(x, power);
        }
    }
}    