/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 10, 2024
 * Purpose: Project 2 Version 2
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <string>
#include <limits>
#include <vector>
#include <cstdlib>
#include <ctime> 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 
//Greet Players
void greetPlayers(int players, const string& plyr1 = "Player 1", const string& plyr2 = "Player 2");
// Initialize Deck
void initializeDeck();
//Shuffle the Deck
void shuffleDeck(vector<string>& deck);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //greet players
    int players; // two players
    string plyr1, plyr2; 

    cout << "Ready to play Go Fish?" << endl;
    cout << "Pick a player 1 or 2:" << endl;
    cin >> players; 
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); // Ignore newline character
    
    
    greetPlayers(players);
    
    cout << endl;
    
    //Initialize Deck 
    initializeDeck();
    
    
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

void initializeDeck(){
    vector<string> deck;
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    
    for (const string &suit : suits) {
        for (const string &rank : ranks) {
            deck.push_back(rank + " of " + suit);
        }
    }
    
    // Output the initialized deck (for testing)
    cout << "Initialized deck:" << endl;
    for (const string &card : deck) {
        cout << card << endl;
    }
    cout << endl;
    
    // Shuffle the deck
    shuffleDeck(deck);
}

void shuffleDeck(vector<string>& deck) {
    srand(static_cast<unsigned>(time(nullptr))); // Seed the random number generator with current time
    for (int i = deck.size() - 1; i > 0; --i) {
        int j = rand() % (i + 1); // Generate a random index in the range [0, i]
        swap(deck[i], deck[j]);
    }
    
    // Output the shuffled deck
    cout << "Shuffled deck:" << endl << endl;
    for (const string &card : deck) {
        cout << card << endl;
    }
}

/*In version 1 I will be creating a program that greets players. I will
 be using dependent if statements and defaulted arguments by creating a
 greet players function. 
 
 In version 2 I will be initializing the deck of cards by creating a
 * initialize deck function that will pass suits and ranks arrays to
 * makeup a full deck. I will then create a function that will shuffle
 * the deck and output the updated shuffled deck.
 */