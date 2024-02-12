/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 10, 2024
 * Purpose: Project 2 Version 8 Final Version 
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
#include <map> 
#include <unordered_map> 
#include <algorithm>
#include <cmath> 
#include <iomanip>
#include <stdio.h>

using namespace std;

// function to sort string of number using selection sort
void slctnSt(char arr[], int n);
//function to print array vertically
void vrtical(char arr[], int n);
//function to display 2-d array
void display();
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
void askFor(vector<string>& askingPlayerHand, vector<string>& receivingPlayerHand, vector<string>& cntPile, const string& askingPlayerName, const string& receivingPlayerName);
// Function to tally scores based on the number of pairs found
int tally(const vector<string>& hand);
// Function to calculate the square root of the score
float root(int score);
// Function to check if a player's hand is empty
bool isHandEmpty(const vector<string>& hand);
bool end(const vector<string>& deck, const vector<string>& pl1, const vector<string>& pl2);
void endP(int exitStatus);

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    char word[] = "4321"; // Input word
    int size = sizeof(word) / sizeof(word[0]); // Calculate the size of the array
    
    display();
    
    slctnSt(word, size - 1); // Sorting the characters of the word, excluding the null terminator

    vrtical(word, size - 1); // Displaying the sorted characters vertically
    
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
                askFor(pl1, pl2, cntPile, pl1Nm, pl2Nm);
                currPlyr = 2;
                break;
            case 2:
                cout << pl2Nm << "'s turn:" << endl;
                askFor(pl2, pl1, cntPile, pl2Nm, pl1Nm);
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
    string plyrNm[MAX_PLAYERS];
    int plyrScrs[MAX_PLAYERS];

    // Initialize player names and scores
    plyrNm[0] = pl1Nm;
    plyrNm[1] = pl2Nm;
    plyrScrs[0] = pl1Score;
    plyrScrs[1] = pl2Score;

    // Output player names and scores
    for (int i = 0; i < MAX_PLAYERS; ++i) {
        cout << plyrNm[i] << "'s score: " << plyrScrs[i] << ", Square root of the score: " << fixed << setprecision(2) << root(plyrScrs[i]) << endl;
    }
    
    //Exit the program
    endP(0);
}

void display() {
    // Define the letters of the word "gofish!" in a 2D array
    char gofishh[7][7] = {
        {'G', '.', '.', '.', '.', '.', 'h'},
        {'.', 'O', '.', '.', '.', 'H', '.'},
        {'.', '.', 'F', '.', 'S', '.', '.'},
        {'.', '.', '.', 'I', '.', '.', '.'},
        {'.', '.', 'F', '.', 'S', '.', '.'},
        {'.', 'O', '.', '.', '.', 'H', '.'},
        {'G', '.', '.', '.', '.', '.', 'h'}
    };

    // Print the greeting message
    cout << "Welcome to the game!\n";

    // Display the letters of "welcome"
    for (int i = 0; i < 7; ++i) {  // Loop through each row
        for (int j = 0; j < 7; ++j) {  // Loop through each column
            cout << gofishh[i][j] << " ";  // Print the character at row i, column j
        }
        cout << endl;  // Move to the next line after printing each row
    }
}

// Function to perform selection sort
void slctnSt(char arr[], int n) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++) {
            // If current element is smaller than the minimum found so far
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        char temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to display characters of an array vertically
void vrtical(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c\n", arr[i]); // Print each character followed by a newline
    }
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
void askFor(vector<string>& askingPlayerHand, vector<string>& receivingPlayerHand, vector<string>& cntPile, const string& askingPlayerName, const string& receivingPlayerName) {
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
        askFor(askingPlayerHand, receivingPlayerHand, cntPile, askingPlayerName, receivingPlayerName);
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

// Function to end the program with a specified exit status
void endP(int exitStatus) {
    exit(exitStatus);
}
