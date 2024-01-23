/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 14, 2024, 4:26 PM
 * Purpose: Banks are not free! Problem
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
    float blnce = 100,
        mnthlyFees = 10, //monthly fee
        chkFees,//check fees
        lowFee = 15,//low balance fee
        newBlnce; // new balnce with all fees applied
    short numChks = 60;
    
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
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cout<<"Balance     $"<<setw(9)<< setprecision(2) << fixed <<blnce<<endl;
    cout<<"Check Fee   $"<<setw(9)<<chkFees<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<mnthlyFees<<endl;
    cout<<"Low Balance $"<<setw(9)<<lowFee<<endl;
    cout<<"New Balance $"<<setw(9)<<newBlnce;

    //Exit stage right or left!
    return 0;
}