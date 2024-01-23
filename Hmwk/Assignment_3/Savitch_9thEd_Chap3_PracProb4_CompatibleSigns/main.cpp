/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 14, 2024, 7:35 PM
 * Purpose: If your into horoscopes, then you are compatible with the problem? Problem
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
    string sign1 = "Taurus", sign2 = "Virgo";
    string elmnt1, elmnt2;
    string msg;
    
    //Initialize or input i.e. set variable values
    msg="";
    
    //Map inputs -> outputs
    if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius") {
        elmnt1 = "FIRE";
    } else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") {
        elmnt1 = "EARTH";
    } else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") {
        elmnt1 = "AIR";
    } else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") {
        elmnt1 = "WATER";
    }

    if (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius") {
        elmnt2 = "FIRE";
    } else if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn") {
        elmnt2 = "EARTH";
    } else if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius") {
        elmnt2 = "AIR";
    } else if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces") {
        elmnt2 = "WATER";
    }

    // Determine compatibility
    if (elmnt1 == elmnt2) {
        msg = " are compatible ";
        if (elmnt1 == "FIRE" && elmnt2 == "FIRE") msg += "Fire signs.";
        else if (elmnt1 == "EARTH" && elmnt2 == "EARTH") msg += "Earth signs.";
        else if (elmnt1 == "AIR" && elmnt2 == "AIR") msg += "Air signs.";
        else if (elmnt1 == "WATER" && elmnt2 == "WATER") msg += "Water signs.";
    }else{
        msg = " are not compatible signs.";
    }
    
    //Display the outputs
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cout<<sign1<<" and "<<sign2<<msg;

    //Exit stage right or left!
    return 0;
}