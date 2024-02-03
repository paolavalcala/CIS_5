/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 28, 2024, 10:30 PM
 * Purpose: Project 1 Version 1
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    short players; // two players
    short plyr1 = 1, plyr2 = 2; // variables for the players
    const int deckSize = 20; //deck of 20 cards
    int card; //individual cards
   
    
    //Initialize all variables 

    
    //Process or Map Solutions
    
    
    //Display the output
    cout<<"Ready to play Go Fish?"<<endl;
    cout<<"Pick a player 1 or 2:"<<endl;
    cin>>players;
    switch (players) {
        case 1:
            cout << "Welcome Player 1!" << endl;
            break;
        case 2:
            cout << "Welcome Player 2!" << endl;
    }
    
    
    cout << "Here is your Deck of cards: ";
    
    for (int i = 1; i <= deckSize; ++i) {
        // Calculate the card value based on the position in the deck
        card = ((i - 1) % 10) + 1;
        
        cout << card << " ";
    }
    
    
    //Exit the program
    return 0;
}


//1/26/23
//Today I am creating variables for players and cards. I am creating an input
//prompt for the players. I am also trying to figure out how to hold and display
//all 52 cards and their values in the variable: deckOfCards without using an array.

//1/28/23
//Today I am simplifying the project to 2 players only and making the deck of cards
//only hold 20 cards. I am going to try considering the deck as a sequence of numbers 
//from 1 to 10 that repeats twice.