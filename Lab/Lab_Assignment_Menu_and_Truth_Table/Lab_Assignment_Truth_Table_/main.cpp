/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 16, 2024, 1:15 PM
 * Purpose: Lab Assignment - Truth Table
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
    bool x, y;

    //Heading
    cout << "X Y !X !Y X&&Y X||Y X&&Y X^Y X^Y^Y !(X&&Y) !X||Y !(X||Y) !X&&!" << endl << endl;

    //Row 1
    x = true;
    y = true;
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x && y ? 'T' : 'F') << "    ";
    cout << (x || y ? 'T' : 'F') << "    ";
    cout << (x && y ? 'T' : 'F') << "   ";
    cout << (x ^ y ? 'T' : 'F') << "    ";
    cout << (x ^ y ^ y ? 'T' : 'F') << "    ";
    cout << (!(x && y) ? 'T' : 'F') << "      ";
    cout << (!x || y ? 'T' : 'F') << "      ";
    cout << (!(x || y) ? 'T' : 'F') << "      ";
    cout << (!x && !y ? 'T' : 'F') << endl;

    //Row 2
    x = true;
    y = false;
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x && y ? 'T' : 'F') << "    ";
    cout << (x || y ? 'T' : 'F') << "    ";
    cout << (x && y ? 'T' : 'F') << "   ";
    cout << (x ^ y ? 'T' : 'F') << "    ";
    cout << (x ^ y ^ y ? 'T' : 'F') << "    ";
    cout << (!(x && y) ? 'T' : 'F') << "      ";
    cout << (!x || y ? 'T' : 'F') << "      ";
    cout << (!(x || y) ? 'T' : 'F') << "      ";
    cout << (!x && !y ? 'T' : 'F') << endl;

    //Row 3
    x = false;
    y = true;
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x && y ? 'T' : 'F') << "    ";
    cout << (x || y ? 'T' : 'F') << "    ";
    cout << (x && y ? 'T' : 'F') << "   ";
    cout << (x ^ y ? 'T' : 'F') << "    ";
    cout << (x ^ y ^ y ? 'T' : 'F') << "    ";
    cout << (!(x && y) ? 'T' : 'F') << "      ";
    cout << (!x || y ? 'T' : 'F') << "      ";
    cout << (!(x || y) ? 'T' : 'F') << "      ";
    cout << (!x && !y ? 'T' : 'F') << endl;

    //Row 4
    x = false;
    y = false;
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x && y ? 'T' : 'F') << "    ";
    cout << (x || y ? 'T' : 'F') << "    ";
    cout << (x && y ? 'T' : 'F') << "   ";
    cout << (x ^ y ? 'T' : 'F') << "    ";
    cout << (x ^ y ^ y ? 'T' : 'F') << "    ";
    cout << (!(x && y) ? 'T' : 'F') << "      ";
    cout << (!x || y ? 'T' : 'F') << "      ";
    cout << (!(x || y) ? 'T' : 'F') << "      ";
    cout << (!x && !y ? 'T' : 'F') << endl;

    //Exit the Program
    return 0;
}

