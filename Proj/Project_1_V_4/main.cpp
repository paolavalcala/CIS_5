/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 29, 2024, 6:51 AM
 * Purpose: Project 1 Version 1
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <cstdlib> // for rand() function
#include <ctime>   // for time() function
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare all variables
    short players; // two players
    short plyr1 = 1, plyr2 = 2; // variables for the players
    int deckSize = 52; //deck of 52 cards
    int card; //individual cards
    string shffld; // Variable to hold the shuffled deck
   
    
    //Initialize all variables 

    
    //Process or Map Solutions
    
    
    //Display the output
    cout<<"Ready to play Go Fish?"<<endl;
    cout<<"Pick a player 1 or 2:"<<endl;
    cin>>players;
    if (players == 1) {
        cout << "Welcome Player " << plyr1 << "!" << endl;
    } else if (players == 2) {
        cout << "Welcome Player " << plyr2 << "!" << endl;
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
    }
    
    cout<<endl<<endl;
    
    cout << "Here is your Initial Deck of cards: ";
    
    for (int i = 1; i <= deckSize; ++i) {
        // Calculate the card value based on the position in the deck
        card = ((i - 1) % 13) + 1;
        
        cout << card << " ";
        
        // Add a newline every 13 cards for better formatting
        if (i % 13 == 0) {
            cout << endl;
        }
    }
    
    cout<<endl<<endl;
    
    // Shuffle the cards and store in the 'shffld' variable
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = deckSize; i >= 1; --i) {
        int card = rand() % 13 + 1;
        shffld += std::to_string(card) + " ";

        if (i % 13 == 1) {
            shffld += "\n";
        }
    }
    
    cout << "Here is your shuffled deck:\n" << shffld <<endl;
    
    cout<<endl<<endl;
    
    //split the deck between players each
    
    //each player starts with 7 cards each 
    string p1Hand, p2Hand;
    for (int i = 1; i <= 14; ++i){
        card = ((i - 1) % 13) + 1;
        if (i <= 7) {
            p1Hand += to_string(card) + " ";
        } else {
            p2Hand += to_string(card) + " ";
        }
    }
    
    cout << "Player 1's hand: " << p1Hand << endl;
    cout << "Player 2's hand: " << p2Hand << endl;
    
    
    //Exit the program
    return 0;
}


//1/26/23 version 1
//Today I am creating variables for players and cards. I am creating an input
//prompt for the players. I am also trying to figure out how to hold and display
//all 52 cards and their values in the variable: deckOfCards without using an array.

//1/28/23 version 2
//Today I am simplifying the project to 2 players only and making the deck of cards
//only hold 20 cards. I am going to try considering the deck as a sequence of numbers 
//from 1 to 10 that repeats twice.

//1/29/23 version 3
//I am going to try and implement the cstdlin and the ctime libraries to shuffle the 
//deck of cards.

//1/29/23 version 4
//I am updating the way to assign the player number based on user input.
//updating the deck to represent a full deck of 52 cards.
//I will try and figure out a way to split the deck between players.