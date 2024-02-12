/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 10, 2024
 * Purpose: Project 2 Version 6
 */

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
#include <algorithm>
#include <cmath> // Include cmath for mathematical functions
#include <iomanip>

using namespace std;

// Function to greet players
void greetPl(const string& pl1);
void greetPl(const string& pl1, const string& pl2);
// Function to initialize the deck
void initDeck(vector<string>& deck);
// Function to shuffle the deck
void shufDeck(vector<string>& deck);
// Function to deal cards
void dealCrds(vector<string>& deck, vector<string>& pl1, vector<string>& pl2, vector<string>& cntPile);
// Function to sort cards in a player's hand in ascending order 
void bblSort(vector<string>& hand);
// Function to find matches in a player's hand
void findMtchs(const vector<string>& hand);
// Function to perform linear search in a vector of strings
bool lnrSrch(const vector<string>& sts, const string& st);
// Function for players to ask each other for a card
void askForCard(vector<string>& askingPlayerHand, vector<string>& receivingPlayerHand, vector<string>& cntPile, const string& askingPlayerName, const string& receivingPlayerName);
// Function to tally scores based on the number of pairs found
int tally(const vector<string>& hand);
// Function to calculate the square root of the score
float root(int score);
// Function to check if a player's hand is empty
bool isHandEmpty(const vector<string>& hand);
bool end(const vector<string>& deck, const vector<string>& pl1, const vector<string>& pl2);


//Program Execution Begins Here
int main(int argc, char** argv) {
    // Greet players
    cout << "Ready to play Go Fish?" << endl << endl;
    cout << "How many players? (1 for playing against computer, 2 for two players): ";
    int plrs;
    cin >> plrs;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string pl1Nm, pl2Nm;
    if (plrs == 2) {
        cout << "Enter Player 1's name: ";
        getline(cin, pl1Nm);
        cout << "Enter Player 2's name: ";
        getline(cin, pl2Nm);
    } else if (plrs == 1) {
        cout << "Enter Your name: ";
        getline(cin, pl1Nm);
        pl2Nm = "Computer";
    }

    greetPl(pl1Nm, pl2Nm);
    
    // Initialize deck, players' hands, and center pile
    vector<string> deck, pl1, pl2, cntPile;
    initDeck(deck);
    shufDeck(deck);
    dealCrds(deck, pl1, pl2, cntPile);
    
    // Sort players' hands
    bblSort(pl1);
    bblSort(pl2);
    
    // Output players' hands and center pile
    cout << pl1Nm << "'s hand:" << endl;
    for (const string& card : pl1) {
        cout << card << endl;
    }
    cout << endl;

    if (plrs == 2) {
        cout << pl2Nm << "'s hand:" << endl;
        for (const string& card : pl2) {
            cout << card << endl;
        }
        cout << endl;
    }

    cout << "Center Pile:" << endl;
    for (const string& card : cntPile) {
        cout << card << endl;
    }
    
    cout << endl;
    
    int currPlyr = 1;
    bool empty = false; // Flag to indicate whether the deck is empty

    do {
        // Check if the center pile is empty
        if (cntPile.empty()) {
            cout << "The center pile is empty. Game over." << endl;
            break;
        }

        switch (currPlyr) {
            case 1:
                cout << pl1Nm << "'s turn:" << endl;
                askForCard(pl1, pl2, cntPile, pl1Nm, pl2Nm);
                currPlyr = 2;
                break;
            case 2:
                cout << pl2Nm << "'s turn:" << endl;
                askForCard(pl2, pl1, cntPile, pl2Nm, pl1Nm);
                currPlyr = 1;
                break;
        }

        // Check if either player's hand is empty
        if (isHandEmpty(pl1) || isHandEmpty(pl2)) {
            cout << "A player's hand is empty. Game over." << endl;
            break;
        }

    } while (!end(deck, pl1, pl2));

    
    // Tally scores for both players
    int pl1Score = tally(pl1);
    int pl2Score = tally(pl2);

    // Calculate square root of scores
    float pl1Root = root(pl1Score);
    float pl2Root = root(pl2Score);

    cout << pl1Nm << "'s score: " << pl1Score << ", Square root of the score: " << fixed << setprecision(2) <<pl1Root << endl;
    cout << pl2Nm << "'s score: " << pl2Score << ", Square root of the score: " <<  fixed << setprecision(2) <<pl2Root << endl;

    // Declare parallel arrays to hold player names and their corresponding scores
    const int MAX_PLAYERS = 2;
    string playerNames[MAX_PLAYERS];
    int playerScores[MAX_PLAYERS];

    // Initialize player names and scores
    playerNames[0] = pl1Nm;
    playerNames[1] = pl2Nm;
    playerScores[0] = pl1Score;
    playerScores[1] = pl2Score;

    // Output player names and scores
    for (int i = 0; i < MAX_PLAYERS; ++i) {
        cout << playerNames[i] << "'s score: " << playerScores[i] << ", Square root of the score: " << fixed << setprecision(2) << root(playerScores[i]) << endl;
    }
    
    //Exit the program
    return 0;
}

// Function to greet players
void greetPl(int plrs, const string& pl1, const string& pl2){
    if (plrs == 1) {
        greetPl(pl1);
    } else if (plrs == 2){
        greetPl(pl1, pl2);
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl<<endl;
    }
}

void greetPl(const string& pl1) {
    cout << "Welcome " << pl1 << "!" <<endl<<endl;
}

void greetPl(const string& pl1, const string& pl2) {
    cout << "Welcome " << pl1 << " and " << pl2 << "!" <<endl<<endl;
}

// Function to initialize the deck of cards
void initDeck(vector<string>& deck) {
    // Array of strings representing card suits and ranks
    string sts[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string rks[] = {"2", "3", "4",};

    // Loop through each suit and rank to create cards
    for (const string& st : sts) {
        for (const string& rk : rks) {
            deck.push_back(rk + " of " + st);
        }
    }
}

// Function to shuffle the deck of cards
void shufDeck(vector<string>& deck) {
    srand(static_cast<unsigned>(time(nullptr))); // Seed the random number generator with current time
    int n = deck.size();
    for (int i = n - 1; i > 0; --i) {
        int j = rand() % (i + 1); // Generate a random index in the range [0, i]
        swap(deck[i], deck[j]); // Swap cards at index i and j
    }
}

// Function to deal cards to players
void dealCrds(vector<string>& deck, vector<string>& pl1, vector<string>& pl2, vector<string>& cntPile) {
    // Deal 3 cards to each player
    for (int i = 0; i < 3; ++i) {
        pl1.push_back(deck.back());
        deck.pop_back();
        pl2.push_back(deck.back());
        deck.pop_back();
    }
    // Remaining cards go to center pile
    for (const string& card : deck) {
        cntPile.push_back(card);
    }
}

// Function to perform bubble sort on a hand of cards
void bblSort(vector<string>& hand) {
    int n = hand.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (hand[j] > hand[j + 1]) { // Compare adjacent cards
                swap(hand[j], hand[j + 1]); // Swap if out of order
            }
        }
    }
}

// Function to find matching pairs in a hand of cards
void findMtchs(const vector<string>& hand) {
    // Initialize variables
    int mtchs = 0; // Counter for total number of pairs found
    map<string, int> suitCounts; // Map to store the count of each suit in the hand

    // Count occurrences of each suit in the hand
    for (const string& card : hand) {
        string st = card.substr(card.find("of ") + 3); // Extract the suit from the card
        suitCounts[st]++; // Increment the count of this suit in the map
    }

    // Find pairs of matching suits
    vector<string> umtchdCards; // Vector to store unmatched cards
    for (const auto& pair : suitCounts) { // Iterate over each suit count in the map
        if (pair.second >= 2) { // If there are at least two cards of this suit
            mtchs += pair.second / 2; // Increment matches by the number of pairs found

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
                        umtchdCards.push_back(card); // If more than 2 cards of this suit, add to unmatched cards
                    }
                }
            }
            cout << endl <<endl; // End the line after printing the pair
        } else {
            // If less than two cards of this suit, add all cards of this suit to unmatched cards
            for (const string& card : hand) {
                if (card.substr(card.find("of ") + 3) == pair.first) {
                    umtchdCards.push_back(card);
                }
            }
        }
    }

    // Output total pairs found
    if (mtchs == 0) {
        cout << "No matches found." << endl << endl;
    } else {
        cout << "Total pairs found: " << setw(5) << mtchs << endl <<endl;
    }

    // Output unmatched cards
    cout << "Unmatched cards: " << endl << endl;
    for (const string& card : umtchdCards) {
        cout << card << endl;
    }
}

// Function for players to ask each other for a card
void askForCard(vector<string>& askingPlayerHand, vector<string>& receivingPlayerHand, vector<string>& cntPile, const string& askingPlayerName, const string& receivingPlayerName) {
    string cardToAsk;
    cout << askingPlayerName << ", which card would you like to ask " << receivingPlayerName << " for? ";
    cin >> cardToAsk;

    // Check if the receiving player has the requested card
    if (lnrSrch(receivingPlayerHand, cardToAsk)) {
        cout << receivingPlayerName << " has the card you asked for!" << endl;
        // Remove the card from the receiving player's hand
        receivingPlayerHand.erase(remove(receivingPlayerHand.begin(), receivingPlayerHand.end(), cardToAsk), receivingPlayerHand.end());
        // Add the card to the asking player's hand
        askingPlayerHand.push_back(cardToAsk);

        // Check if the asking player has formed a match
        findMtchs(askingPlayerHand);
        
        // Ask the same player for another card if they formed a match
        askForCard(askingPlayerHand, receivingPlayerHand, cntPile, askingPlayerName, receivingPlayerName);
    } else {
        cout << receivingPlayerName << " doesn't have the card you asked for. Go fish!" << endl;
        // If the center pile is not empty, draw a card from it
        if (!cntPile.empty()) {
            // Draw a card from the center pile
            string drawnCard = cntPile.back();
            cntPile.pop_back();
            // Add the drawn card to the asking player's hand
            askingPlayerHand.push_back(drawnCard);

            cout << askingPlayerName << " draws a card from the center pile: " << drawnCard << endl;

            // Check if the drawn card forms a match
            findMtchs(askingPlayerHand);
        } else {
            cout << "The center pile is empty. No cards to draw." << endl;
        }
    }
}

// Function to perform linear search in a vector of strings
bool lnrSrch(const vector<string>& sts, const string& st) {
    for (const string& s : sts) {
        if (s == st) {
            return true; // Found
        }
    }
    return false; // Not found
}

// Function to tally scores based on the number of pairs found
int tally(const vector<string>& hand) {
    int score = 0;
    map<string, int> stCnts; // Map to store the count of each suit in the hand

    // Count occurrences of each suit in the hand
    for (const string& card : hand) {
        string st = card.substr(card.find("of ") + 3); // Extract the suit from the card
        stCnts[st]++; // Increment the count of this suit in the map
    }

    // Find pairs of matching suits
    for (const auto& pair : stCnts) { // Iterate over each suit count in the map
        if (pair.second >= 2) { // If there are at least two cards of this suit
            score += pair.second / 2; // Increment score by the number of pairs found
        }
    }

    return score;
}

// Function to calculate the square root of the score
float root(int score) {
    return sqrt(score);
}

// Function to check if a player's hand is empty
bool isHandEmpty(const vector<string>& hand) {
    return hand.empty();
}

bool end(const vector<string>& deck, const vector<string>& pl1, const vector<string>& pl2) {
    // Check if the deck is empty
    if (deck.empty()) {
        cout << "The deck is empty. Game over." << endl;
        return true;
    }
    
    // Check if either player's hand is empty
    if (isHandEmpty(pl1) || isHandEmpty(pl2)) {
        cout << "A player's hand is empty. Game over." << endl;
        return true;
    }
    
    return false; // Game is not over yet
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
 *Version 5 I am going to make the deck smaller and shorten my varaible names.
 * add a switch case to switch between player turns and do -while so the game 
 * keeps running while there are cards in the deck.  
 * create a function where player ask each other for cards. I added c-math to get 
 * a score and calculate square root of score. 
 * 
 * version 6 I am going to implememnt parallel arrays to hold the scores.
 * I added set precision for the square root of the scores. 
 * I implemented overloading to greet the players.
 * I implemented the end()
 * 
 */