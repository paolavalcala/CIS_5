/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 25, 2024
 * Purpose: Just like writing a check! Problem 
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes Here
string cnvrtToEng(int num);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    
    //Output the check value
    
    cout<<cnvrtToEng(number)<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}

//function to conver digits to english
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