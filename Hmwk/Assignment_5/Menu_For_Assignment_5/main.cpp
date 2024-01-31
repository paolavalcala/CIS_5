/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 31, 2024
 * Purpose: Menu Program for Assignment 5
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
using namespace std;

//Function Prototypes 
void case1();
void case2();
void case3();
void case4();
void case5();
void case8();
void case9();


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char menuItm;//Option to choose from menu
    unsigned short itmNum;//Number of options
    
    //The Process -> Map Inputs to Outputs
    menuItm = 7;//In this case we have 3 options
    
    do{
        //Display user choice
        cout<<"Choose from the options displayed"<<endl;
        cout<<"Input the problem number to run."<<endl;
        cout<<"Type 1 for Problem 1 MinMax Problem"<<endl;
        cout<<"Type 2 for Problem 2 Factorial Problem"<<endl;
        cout<<"Type 3 for Problem 3 isPrime Problem"<<endl;
        cout<<"Type 4 for Problem 4 Collatz Sequence Problem"<<endl;
        cout<<"Type 5 for Problem 5 Collatz Sequence with Output of Sequence Problem"<<endl;
        cout<<"Type 8 for Problem 8 Present Value Problem"<<endl;
        cout<<"Type 9 for Problem 9 Average Problem"<<endl;
        cout<<endl;
        cin>>itmNum;//Read in the option
        
        
        //Use a switch case to implement
        switch(itmNum){
            case 1:case1();break;
            case 2:case2();break;
            case 3:case3();break;
            case 4:case4();break;
            case 5:case4();break;
            case 8:case8();break;
            case 9:case9();break;
             default:cout<<endl<<"Exiting the Menu"<<endl<<endl;
        }   
    }while(itmNum>0&&itmNum<=9);
    
    //Exit the Program
    return 0;
}

void minmax(int num1,int num2,int num3,int& min,int& max);

void case1(){
    //Declare Variables
    short num1, num2, num3;
    int min, max;
      
    //Output data
    cout<<"Input 3 numbers"<<endl;
    //Initialize Variables
    cin>>num1>>num2>>num3;
    
    //Process/Map inputs to outputs
    minmax(num1, num2, num3, min, max);
    
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
}

void minmax(int num1,int num2,int num3,int& min,int& max){
    // find min
    min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;

    // find max
    max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
}

int fctrl(int num);

void case2(){
   //Declare Variables
    int num;
    int factorial;
    
    //Output data
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    //Initialize Variables
    cin>>num;
    
    //Process/Map inputs to outputs
    factorial = fctrl(num);
    cout<<num<<"! = "<<factorial;
}

int fctrl(int num){
    int result = 1; // Initialize result to 1 for the multiplication

    // Calculate factorial
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }

    return result;
}


bool isPrime(int num);

void case3(){
  //Declare Variables
    int num;

    //Process/Map inputs to outputs
    
    //Output data
    cout<<"Input a number to test if Prime."<<endl;
    
    //Initialize Variables
    cin>>num;
    
    if (isPrime(num)){
        cout<<num<<" is prime.";
    } else {
        cout<<num<<" is not prime.";
    }  
}

bool isPrime(int num){
    //If not prime, return false.
    if (num <= 1) return false; // 0 and 1 are not prime

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false; // num is divisible by i, not prime
        }
    }
    //If prime, return true.
    return true; // n is prime
}

int collatz(int);

void case4(){
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
}


void prntSqunc(int n);

void case5(){
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    prntSqunc(n);
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
}

int collatz(int n){
    int steps = 0; // Count from the start of the sequence to the end and output its length.

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2; // When even divide by 2
        } else {
            n = 3 * n + 1; //when odd multiply by 3 and add 1;
        }
        steps++;
    }
    steps++;

    return steps;
}

void prntSqunc(int n) {
    while (n != 1) {
        cout << n;
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n != 1) {
            cout << ", ";
        }
    }
    cout << ", " << 1 << endl; // Include the last element (1) in the sequence
}


float psntVal(float ftrVal,float intrstRt,int numYrs);

void case8(){
    //Declare Variables
    float ftrVal, intrstRt;
    int numYrs;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>ftrVal;
    
    cout<<"Input the Number of Years"<<endl;
    cin>>numYrs;
    
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>intrstRt;
    
    float prsnt = psntVal(ftrVal, intrstRt, numYrs);
    
    cout<<"The Present Value = $" << fixed << setprecision(2) << prsnt;
}

float psntVal(float ftrVal,float intrstRt,int numYrs){
    // Calculate present value using the formula P = F / (1 + r)^n
    float result = ftrVal / pow(1 + intrstRt / 100, numYrs);
    return result;
}


void getScre(int &scr1, int &scr2, int &scr3, int &scr4, int &scr5);

float calcAvg(int scr1,int scr2,int scr3,int scr4,int scr5);

int fndLwst(int scr1,int scr2,int scr3,int scr4,int scr5);

void case9(){
    //Declare Variables
    int scr1, scr2, scr3, scr4, scr5; //5 test scores
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    cout<<"Input the 5 test scores."<<endl;
    
    getScre(scr1, scr2, scr3, scr4, scr5);
    
    cout<<"The average test score = " << fixed << setprecision(1) << calcAvg(scr1, scr2, scr3, scr4, scr5);
}

void getScre(int &scr1, int &scr2, int &scr3, int &scr4, int &scr5){
    // Get input for each test score and validate the range
    if (scr1 < 1 || scr1 > 100) {
        do {
            cin >> scr1;
        } while (scr1 < 1 || scr1 > 100);
    }

    if (scr2 < 1 || scr2 > 100) {
        do {
            cin >> scr2;
        } while (scr2 < 1 || scr2 > 100);
    }

    if (scr3 < 1 || scr3 > 100) {
        do {
            cin >> scr3;
        } while (scr3 < 1 || scr3 > 100);
    }

    if (scr4 < 1 || scr4 > 100) {
        do {
            cin >> scr4;
        } while (scr4 < 1 || scr4 > 100);
    }

    if (scr5 < 1 || scr5 > 100) {
        do {
            cin >> scr5;
        } while (scr5 < 1 || scr5 > 100);
    }
}


float calcAvg(int scr1,int scr2,int scr3,int scr4,int scr5){
    // Call function to find the lowest score
    int lowest = fndLwst(scr1, scr2, scr3, scr4, scr5);

    // Calculate the sum of the four highest scores
    int sum = scr1 + scr2 + scr3 + scr4 + scr5 - lowest;

    // Calculate and return the average
    return static_cast<float>(sum) / 4;
}


int fndLwst(int scr1,int scr2,int scr3,int scr4,int scr5){
    // Find and return the lowest score
    int lowest = scr1;

    if (scr2 < lowest) lowest = scr2;
    if (scr3 < lowest) lowest = scr3;
    if (scr4 < lowest) lowest = scr4;
    if (scr5 < lowest) lowest = scr5;

    return lowest;
}
