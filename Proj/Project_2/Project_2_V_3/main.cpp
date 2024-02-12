/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 10, 2024
 * Purpose: Project 2 Version 3
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
void initializeDeck(vector<string>& deck);
//Shuffle the Deck
void shuffleDeck(vector<string>& deck);
//Deal Cards
void dealCards(vector<string>& deck, vector<string>& player1, vector<string>& player2, vector<string>& cntrPile);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //greet players
    int players; // two players
    string plyr1, plyr2; 

    cout << "Ready to play Go Fish?" << endl << endl;
    cout << "Pick a player 1 or 2:" << endl;
    cin >> players; 
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); // Ignore newline character
    
    
    greetPlayers(players);
    
    // Initialize deck, players' hands, and center pile
    vector<string> deck, player1, player2, cntrPile;
    initializeDeck(deck);
    shuffleDeck(deck);
    dealCards(deck, player1, player2, cntrPile);
    
     // Output players' hands and center pile
    cout << "Player 1's hand:" << endl;
    for (const string& card : player1) {
        cout << card << endl;
    }
    cout << endl;

    cout << "Player 2's hand:" << endl;
    for (const string& card : player2) {
        cout << card << endl;
    }
    cout << endl;

    cout << "Center Pile:" << endl;
    for (const string& card : cntrPile) {
        cout << card << endl;
    }
    
    
    //Exit the program
    return 0;
}

void greetPlayers(int players, const string& plyr1, const string& plyr2){
    if (players == 1) {
        cout << "Welcome " << plyr1 << "!" <<endl<<endl;
    } else if (players == 2){
        cout << "Welcome " << plyr2 << "!" <<endl<<endl;
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl<<endl;
    }
}

void initializeDeck(vector<string>& deck) {
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    for (const string& suit : suits) {
        for (const string& rank : ranks) {
            deck.push_back(rank + " of " + suit);
        }
    }
}

void shuffleDeck(vector<string>& deck) {
    srand(static_cast<unsigned>(time(nullptr))); // Seed the random number generator with current time
    int n = deck.size();
    for (int i = n - 1; i > 0; --i) {
        int j = rand() % (i + 1); // Generate a random index in the range [0, i]
        swap(deck[i], deck[j]);
    }
}

void dealCards(vector<string>& deck, vector<string>& player1, vector<string>& player2, vector<string>& cntrPile) {
    // Deal 7 cards to each player
    for (int i = 0; i < 7; ++i) {
        player1.push_back(deck.back());
        deck.pop_back();
        player2.push_back(deck.back());
        deck.pop_back();
    }
    // Remaining cards go to center pile
    for (const string& card : deck) {
        cntrPile.push_back(card);
    }
}

/*In version 1 I will be creating a program that greets players. I will
 be using dependent if statements and defaulted arguments by creating a
 greet players function. 
 
 In version 2 I will be initializing the deck of cards by creating a
 * initialize deck function that will pass suits and ranks arrays to
 * makeup a full deck. I will then create a function that will shuffle
 * the deck and output the updated shuffled deck.
 * 
 * In Version 3 I will split the deck between players. Each player gets 
 * 7 cards each. I will create a deal cards function to handle this.
 * The rest of the cards will be held in the center pile 
 * which will be a variable that holds the remaining deck 
 * vector that players will be able to pull cards from.
 */