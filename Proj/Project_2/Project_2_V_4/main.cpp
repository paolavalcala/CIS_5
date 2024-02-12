/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 10, 2024
 * Purpose: Project 2 Version 4
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <string>
#include <limits>
#include <vector>
#include <cstdlib>
#include <ctime> 
#include <limits>
#include <unordered_set> 
#include <map> // Include this for 'map' template
#include <unordered_map> 

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
//sort cards in Player's hands in ascending order 
void bubbleSortHand(vector<string>& hand);
void findMatches(const vector<string>& hand);
bool linearSearch(const vector<string>& suits, const string& suit);

//Program Execution Begins Here
int main(int argc, char** argv) {
     // Greet players
    cout << "Ready to play Go Fish?" << endl << endl;
    cout << "How many players? (1 for playing against computer, 2 for two players): ";
    int players;
    cin >> players;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string plyr1Nm, plyr2Nm;
    if (players == 2) {
        cout << "Enter Player 1's name: ";
        getline(cin, plyr1Nm);
        cout << "Enter Player 2's name: ";
        getline(cin, plyr2Nm);
    } else if (players == 1) {
        cout << "Enter Your name: ";
        getline(cin, plyr1Nm);
        plyr2Nm = "Computer";
    }
    
   greetPlayers(players, plyr1Nm, plyr2Nm);
    
    // Initialize deck, players' hands, and center pile
    vector<string> deck, player1, player2, cntrPile;
    initializeDeck(deck);
    shuffleDeck(deck);
    dealCards(deck, player1, player2, cntrPile);
    
    // Sort players' hands
    bubbleSortHand(player1);
    bubbleSortHand(player2);
    
    // Output players' hands and center pile
    cout << plyr1Nm << "'s hand:" << endl;
    for (const string& card : player1) {
        cout << card << endl;
    }
    cout << endl;

    if (players == 2) {
        cout << plyr2Nm << "'s hand:" << endl;
        for (const string& card : player2) {
            cout << card << endl;
        }
        cout << endl;
    }

    cout << "Center Pile:" << endl;
    for (const string& card : cntrPile) {
        cout << card << endl;
    }
    
    cout << endl;
    
    cout << "Finding matches in " << plyr1Nm << "'s hand..." << endl;
    findMatches(player1);

    if (players == 2) {
        cout << "Finding matches in " << plyr2Nm << "'s hand..." << endl;
        findMatches(player2);
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

void bubbleSortHand(vector<string>& hand) {
    int n = hand.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (hand[j] > hand[j + 1]) {
                swap(hand[j], hand[j + 1]);
            }
        }
    }
}

bool linearSearch(const vector<string>& suits, const string& suit) {
    for (const string& s : suits) {
        if (s == suit) {
            return true;
        }
    }
    return false;
}

void findMatches(const vector<string>& hand) {
    // Initialize variables
    int matches = 0; // Counter for total number of pairs found
    map<string, int> suitCounts; // Map to store the count of each suit in the hand

    // Count occurrences of each suit in the hand
    for (const string& card : hand) {
        string suit = card.substr(card.find("of ") + 3); // Extract the suit from the card
        suitCounts[suit]++; // Increment the count of this suit in the map
    }

    // Find pairs of matching suits
    vector<string> unmatchedCards; // Vector to store unmatched cards
    for (const auto& pair : suitCounts) { // Iterate over each suit count in the map
        if (pair.second >= 2) { // If there are at least two cards of this suit
            matches += pair.second / 2; // Increment matches by the number of pairs found

            // Output match information
            cout << "Match found: " << pair.first << " (" << pair.second << " cards)" << endl;

            // Print matching pairs
            int pairCount = 0; // Counter for the number of cards in the pair
            for (const string& card : hand) {
                if (card.substr(card.find("of ") + 3) == pair.first) { // If the card matches the current suit
                    if (pairCount < 2) { // If the pair count is less than 2 (i.e., less than 2 cards in the pair)
                        cout << "Pair: " << card << " "; // Output the card as part of the pair
                        pairCount++; // Increment the pair count
                    } else {
                        unmatchedCards.push_back(card); // If more than 2 cards of this suit, add to unmatched cards
                    }
                }
            }
            cout << endl <<endl; // End the line after printing the pair
        } else {
            // If less than two cards of this suit, add all cards of this suit to unmatched cards
            for (const string& card : hand) {
                if (card.substr(card.find("of ") + 3) == pair.first) {
                    unmatchedCards.push_back(card);
                }
            }
        }
    }

    // Output total pairs found
    if (matches == 0) {
        cout << "No matches found." << endl << endl;
    } else {
        cout << "Total pairs found: " << matches << endl <<endl;
    }

    // Output unmatched cards
    cout << "Unmatched cards: " << endl << endl;
    for (const string& card : unmatchedCards) {
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
 * 
 * In Version 3 I will split the deck between players. Each player gets 
 * 7 cards each. I will create a deal cards function to handle this.
 * The rest of the cards will be held in the center pile 
 * which will be a variable that holds the remaining deck 
 * vector that players will be able to pull cards from.
 * 
 *In version 4 I decided to make the players play against the computer.
 * I am adding the functionality of players hand being sorted in ascending
 * order to make easier to search for matching cards in hand utilizing 
 * bubble sort. I will also create a function that will keep track of the 
 * matches each turn by utilizing linear search to find matches and returning 
 * a match score.
 * 
 *
 */