/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 16, 2024, 1:15 PM
 * Purpose: Lab Assignment - Menu
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
    unsigned char menuItm;//Option to choose from menu
    unsigned short itmNum;//Number of options
    
    //Initialize all variables
    menuItm = 8;
    
    //The Process -> Map Inputs to Outputs
    do{
        //Display user choice
        cout<<"Choose from the options displayed"<<endl;
        cout<<"Input the problem number to run."<<endl;
        cout<<"Type 1 for Problem 1 Sort Names Problem"<<endl;
        cout<<"Type 2 for Problem 2 Books Problem"<<endl;
        cout<<"Type 3 for Problem 3 Bank Charges Problem"<<endl;
        cout<<"Type 4 for Problem 4 Race Problem"<<endl;
        cout<<"Type 5 for Problem 5 ISP Problem"<<endl;
        cout<<"Type 6 for Problem 6 Rock Paper Scissors Problem"<<endl;
        cout<<"Type 7 for Problem 7 Roman Conversion Problem"<<endl;
        cout<<"Type 8 for Problem 8 Compatible Signs Problem"<<endl;
        cout << endl;
        cin>>itmNum;//Read in the option
        
        //Use a switch case to implement
        switch(itmNum){
            case 1: {
                string name1, 
                        name2, 
                        name3;

                //Initialize all variables
                cout<<"Input 3 names"<<endl;
                cin>>name1>>name2>>name3;
                
                //Map inputs -> outputs
                //sorting the first letter of the name based off ascii code index value based off of the bubble sort
                if (name1 > name2){
                    swap(name1, name2);
                }
                if (name2 > name3){
                    swap(name2, name3);
                }
                if (name1 > name2){
                    swap(name1, name2);
                }


                //Display the outputs
                cout<<"Sorting Names"<<endl;
                cout<<name1<<endl;
                cout<<name2<<endl;
                cout<<name3;
                cout << endl;
                cout << endl;
                break;
            }
                
            case 2: {
                //Declare Variables
                short bksPrchsd;
                short pntsErnd;
                
                //Initialize all variables
                cout<<"Input the number of books purchased this month."<<endl;
                cin>>bksPrchsd;

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
                cout<<"Books purchased =  "<<bksPrchsd<<endl;
                cout<<"Points earned   = "<<pntsErnd;
                cout << endl;
                cout << endl;
                break;
            }
                
            case 3: {
                //Declare Variables
                float blnce,
                    mnthlyFees = 10, //monthly fee
                    chkFees,//check fees
                    lowFee = 15,//low balance fee
                    newBlnce; // new balnce with all fees applied
                short numChks;
                
                //Initialize all variables
                cout<<"Input Current Bank Balance and Number of Checks"<<endl;
                cin>>blnce>>numChks;

                //Map inputs -> outputs
                //  If a negative value is given for the beginning balance, display an urgent message indicating the account is overdrawn.
                if (numChks < 0 || blnce < 0) {
                    cout << "URGENT: The account is overdrawn or invalid input." << endl;
                    return 1;
                }

                //calculating Check fees 
                if (numChks < 20)
                    chkFees = 0.10f * numChks;
                else if (numChks < 40)
                    chkFees = 0.08f * numChks;
                else if (numChks < 60)
                    chkFees = 0.06f * numChks;
                else
                    chkFees = 0.04f * numChks;

                //calculating low balance fee
                if (blnce < 400)
                    lowFee = 15.00f;
                else lowFee = 0;

                //calculating new monthly balance
                newBlnce = blnce - lowFee - mnthlyFees - chkFees;

                //Display the outputs
                cout<<"Monthly Bank Fees"<<endl;
                cout<<"Balance     $"<<setw(9)<< setprecision(2) << fixed <<blnce<<endl;
                cout<<"Check Fee   $"<<setw(9)<<chkFees<<endl;
                cout<<"Monthly Fee $"<<setw(9)<<mnthlyFees<<endl;
                cout<<"Low Balance $"<<setw(9)<<lowFee<<endl;
                cout<<"New Balance $"<<setw(9)<<newBlnce;
                cout << endl;
                cout << endl;
                break;
            }    
            
            case 4: {
                //Declare Variables
                string names[] = {"Jack", "Jim", "John"};
                int times[] = {100, 101, 99};
                
                //Initialize all variables

                //Map inputs -> outputs
                if (times[0] > times[1]) {
                    swap(times[0], times[1]);
                    swap(names[0], names[1]);
                }
                if (times[1] > times[2]) {
                    swap(times[1], times[2]);
                    swap(names[1], names[2]);
                }
                if (times[0] > times[1]) {
                    swap(times[0], times[1]);
                    swap(names[0], names[1]);
                }

                //Display the outputs
                cout<<"Race Ranking Program"<<endl;
                cout<<"Input 3 Runners"<<endl;
                cout<<"Their names, then their times"<<endl;
                cout<<names[0]<<"\t"<<setw(3)<<times[0]<<endl;
                cout<<names[1]<<"\t"<<setw(3)<<times[1]<<endl;
                cout<<names[2]<<"\t"<<setw(3)<<times[2];
                cout << endl;
                cout << endl;
                break;
            }    
                
            case 5: {
                //Declare Variables
                char package = 'A';
                float hours = 11;
                float bill; 
                
                //Initialize all variables

                //Map inputs -> outputs
                //     Package A: For $9.95 per month 10 hours of access are provided. Additional hours are $2.00 per hour.
                if (package == 'A'){
                    bill = 9.95 + max(0.0f, hours - 10) * 2.00;
                }
                // Package B: For $14.95 per month, 20 hours of access are provided. Additional hours are $1.00 per hour.
                else if (package == 'B') {
                    bill = 14.95 + max(0.0f, hours - 20) * 1.00;
                }
                // Package C: For $19.95 per month, unlimited access is provided.
                else {
                    bill = 19.95;
                }

                //Display the outputs
                cout<<"ISP Bill"<<endl;
                cout<<"Input Package and Hours"<<endl;
                cout<<"Bill = $ "<<fixed << setprecision(2)<<bill;
                cout << endl;
                cout << endl;
                break;
            }   
               
            case 6: {
                //Declare Variables
                char p1='P', p2='R';
                string msg;

                //Initialize or input i.e. set variable values
                msg="Nothing";

                //Map inputs -> outputs
                msg = p1 == p2 ? "Nobody wins." : msg;
                p1-=p1>=97?32:0;
                p2-=p2>=97?32:0;
                if (p1=='R'){
                    if(p2=='P') msg = "Paper covers rock.";
                    if(p2=='S') msg = "Rock breaks scissors.";
                }else if (p1=='P'){
                    if(p2=='R') msg = "Paper covers rock.";
                    if(p2=='S') msg = "Scissors cuts paper.";
                }else if(p1=='S'){
                    if(p2=='R') msg = "Rock breaks scissors.";
                    if(p2=='P') msg = "Scissors cuts paper.";
                }

                //Display the outputs
                cout<<"Rock Paper Scissors Game"<<endl;
                cout<<"Input Player 1 and Player 2 Choices"<<endl;
                cout<<msg;
                cout << endl;
                cout << endl;
                break;
            }    
                
            case 7: {
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
                cout << endl;
                cout << endl;
                break;
            }
               
            case 8: {
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
                cout << endl;
                cout << endl;
                break;
            }
                
            default:
                cout<<"Exiting the Menu"<<endl;
        }
    }while(itmNum > 0 && itmNum <= menuItm);
    
    //Exit the Program
    return 0;
}

