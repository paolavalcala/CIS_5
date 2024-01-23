/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 14, 2024, 7:35 PM
 * Purpose: Convert Arabic to Roman Numeral Problem
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char n1,//number of 1'unsigned
                n10,//number of 10'unsigned
                n100,//number of 100s
                n1000;//number of 1000'100s
    unsigned short x=999;//4digit number between 1000, 3000
    string msg;
    
    //Initialize or input i.e. set variable values
    msg="";
    
    //Map inputs -> outputs
    if(x<1000 || x>3000){
        msg=" is Out of Range!";
    }else{
        //strip off each digit
        n1 = (x)%10;
        n10 = (x/10)%10;
        n100 = (x/100)%10;
        n1000 = (x/1000);
        // cout<<static_cast<int>(n1000)
        //     <<static_cast<int>(n100)
        //     <<static_cast<int>(n10)
        //     <<static_cast<int>(n1)<<endl;
        
        //utilizing switch case
        switch(n1000){
            case 3 : msg += "M";
            case 2 : msg += "M";
            case 1 : msg += "M";
        };
        //code for outputting Roman Numerals in the 1000'message
        //utilizing ternary operator 
        msg += n100 == 9 ? "CM" :
                n100 == 8 ? "DCCC" :
                n100 == 7 ? "DCC" :
                n100 == 6 ? "DC" :
                n100 == 5 ? "D" :
                n100 == 4 ? "CD" :
                n100 == 3 ? "CCC" :
                n100 == 2 ? "CC" :
                n100 == 1 ? "C" : "";
                
        //code for outputting Roman Numerals in the 10'message
        //utilizing independdent if
        if (n10 == 9) msg += "XC";
        if (n10 == 8) msg += "LXXX";
        if (n10 == 7) msg += "LXX";
        if (n10 == 6) msg += "LX";
        if (n10 == 5) msg += "L";
        if (n10 == 4) msg += "XL";
        if (n10 == 3) msg += "XXX";
        if (n10 == 2) msg += "XX";
        if (n10 == 1) msg += "X";
        
        //code for outputting Roman numerals in 1'message
        //utilizing dependent if case 
        if (n1 == 9) msg += "IX";
        else if (n1 == 8) msg += "VIII";
        else if (n1 == 7) msg += "VII";
        else if (n1 == 6) msg += "VI";
        else if (n1 == 5) msg += "I";
        else if (n1 == 4) msg += "IV";
        else if (n1 == 3) msg += "III";
        else if (n1 == 2) msg += "II";
        else if (n1 == 1) msg += "I";
            
        
        //add message wording 
        msg=" is equal to " + msg;
    }
    
    //Display the outputs
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    // cout<<x<<" is Out of Range!";
    cout<<x<<msg;

    //Exit stage right or left!
    return 0;
}

