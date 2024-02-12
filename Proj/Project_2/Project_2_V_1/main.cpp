/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 10, 2024
 * Purpose: Project 2 Version 1
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <string>
#include <limits>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 
//greet players
void greetPlayers(int players, const string& plyr1 = "Player 1", const string& plyr2 = "Player 2");

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    int players; // two players
    string plyr1, plyr2; 

    cout << "Ready to play Go Fish?" << endl;
    cout << "Pick a player 1 or 2:" << endl;
    cin >> players; 
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); // Ignore newline character
    
    
    greetPlayers(players);
    
    cout << endl;
    //Exit the program
    return 0;
}

void greetPlayers(int players, const string& plyr1, const string& plyr2){
    if (players == 1) {
        cout << "Welcome " << plyr1 << "!" <<endl;
    } else if (players == 2){
        cout << "Welcome " << plyr2 << "!" <<endl;
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
    }
}


/*In version 1 I will be creating a program that greets players. I will
 be using dependent if statements and defaulted arguments by creating a
 * greet players function. */