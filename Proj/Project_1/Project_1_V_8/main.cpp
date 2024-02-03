/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 2, 2024, 1:37 PM
 * Purpose: Project 1 Version 8
 */

//System Libraries
#include <iostream> //Input-Output Library 
#include <cstdlib> // for rand() function
#include <ctime>   // for time() function
#include <string>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare all variables
    short players; // two players
    short plyr1 = 1, plyr2 = 2; // variables for the players
    int deckSize = 12; //deck of 9 cards
    int card; //individual cards
    string shffld; // Variable to hold the shuffled deck

    
    //assign player 1 or 2 
    cout<<"Ready to play Go Fish?"<<endl;
    cout<<"Pick a player 1 or 2:"<<endl;
    cin>>players;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore newline character
    if (players == 1) {
        cout << "Welcome Player " << plyr1 << "!" << endl;
    } else if (players == 2) {
        cout << "Welcome Player " << plyr2 << "!" << endl;
    } else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
    }
    cout<<endl<<endl;
    
    //initializing the deck of cards
    //prints out initial deck 
    cout << "Here is your Initial Deck of cards: ";  
    for (int i = 1; i <= deckSize; ++i) {
        // Calculate the card value based on the position in the deck
        card = ((i - 1) % 6) + 1;
        
        cout << card << " ";
        
        // Add a newline every 9 cards for better formatting
        if (i % 6 == 0) {
            cout << endl;
        }
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
    
    int rndCard;
    
    // Shuffle the cards and store in the 'shffld' variable
    //Prints out your shuffled deck 
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = deckSize; i >= 1; --i) {
        int rndCard = rand() % 6 + 1;
        shffld += to_string(rndCard) + " ";

        if (i % 6 == 1) {
            shffld += "\n";
        }
    }
    
    cout << "Here is your shuffled deck:\n" << shffld <<endl;
    cout<<endl<<endl;
    
    //Prints out the split shuffled deck between hands
    //split the deck between players each
    //each player starts with 7 cards each 
    string p1Hand = "", p2Hand = ""; // Initialize player hands
  
    //cards should be handed to each player from the shffld deck 
    p1Hand = shffld.substr(0, 6);
    p2Hand = shffld.substr(6, 6);

    cout<<"Here is the shuffled deck split between Players:"<<endl;
    cout << "Player 1's hand: " << p1Hand << endl <<endl;
    cout << "Player 2's hand: " << p2Hand << endl <<endl;
    cout<<endl<<endl;
    
    // Print original hands with matches before the first turn starts
    cout << "Player 1's original hand: " << p1Hand << endl <<endl;
    cout << "Player 2's original hand: " << p2Hand << endl<<endl;
    
    // Pause for player 1 to view their hand and identify matches
    cout << "Press Enter to continue...";
    cin.ignore();  // Wait for Enter key

//  Prints out the game play     
//players ask each other for a card
    std::string snglCrd; //variable that holds the requested card by the players
    int p1HndMtch = 0; // String that holds the matching cards for p1Hand
    int p2HndMtch = 0; // String that holds the matching cards for p2Hand

    cout << "Game starts here:" << endl;
    // Game loop
    while (deckSize > 0) {
        // Display player hands
        if (players == plyr1) {
            cout << "Player 1 your turn!" << endl << endl;
            cout << "Player 1's hand: " << p1Hand << endl;
            cout << "Player 1's matches: " << p1HndMtch / 2 << endl << endl;
        }
        if (players == plyr2) {
            cout << "Player 2 your turn!" << endl << endl;
            cout << "Player 2's hand: " << p2Hand << endl;
            cout << "Player 2's matches: " << p2HndMtch / 2 << endl << endl;
        }
        // Players take turns
        switch (players) {
            case 1: {  
                // Identify and display matches in player 1's hand
                for (int i = 0; i < p1Hand.length(); ++i) {
                    char card = p1Hand[i];
                    for (int j = i + 1; j < p1Hand.length(); ++j) {
                        if (card == p1Hand[j]) {
                            p1HndMtch++;
                            // Remove the matched card from player 1's hand
                            p1Hand.erase(j, 1);
                            // Remove the current card as well to avoid duplicate matches
                            p1Hand.erase(i, 1);
                            i--; // Adjust index after erasing a character
                            break; // Exit the inner loop once a match is found
                        }
                    }
                }
                cout << "Player 1's initial matching cards: " << p1HndMtch / 2 << endl << endl;
                
                // Player 1's turn
                while (true) {
                    cout << "Player 2, do you have: ";
                    cin>>snglCrd;
                    // Check if the card is in player 2's hand
                    size_t pos = p2Hand.find(snglCrd);
                    if (pos != string::npos) {
                        cout << "Yes, I have " << snglCrd << endl << endl;
                        // (logic for player 1 getting a card from player 2)
                        p2Hand.erase(pos, snglCrd.length()); // Remove card from p2 hand
                        cout << "Player 1 you got a match! You get another turn!" << endl; // If secure card from other player get another turn
                        p1HndMtch ++;// Increment match count for player 1
                    } else {
                        cout << "No, I don't. Go Fish!" << endl << endl << endl;
                        // Add card to players hand if told "go fish"
                        if (players == plyr1) {
                            // Grab a card from the deck
                            int startIndex = p1Hand.length() * 2;  // Assuming each card occupies two characters (including space)
                            int endIndex = startIndex + 2;  // Assuming each card occupies two characters (including space)
                            string grabbedCard = shffld.substr(startIndex, 2);
                            cout << "Player 1 grabbed a card: " << grabbedCard << endl;
                            // Update player's hand and deck size
                            p1Hand += grabbedCard + " ";
                            deckSize--;
                            cout << "Player 1's updated hand: " << p1Hand << endl;
                            cout << "Deck size: " << deckSize << endl << endl;
                        }
                        break; // Exit the inner loop if Player 2 says "No"
                    }
                }

                break;
            }
            case 2: { 
                // Identify and display matches in player 2's hand
                for (int i = 0; i < p2Hand.length(); ++i) {
                    char card = p2Hand[i];
                    for (int j = i + 1; j < p2Hand.length(); ++j) {
                        if (card == p2Hand[j]) {
                            p2HndMtch++;
                            // Remove the matched card from player 2's hand
                            p2Hand.erase(j, 1);
                            // Remove the current card as well to avoid duplicate matches
                            p2Hand.erase(i, 1);
                            i--; // Adjust index after erasing a character
                            break; // Exit the inner loop once a match is found
                        }
                    }
                }
                cout << "Player 2's initial matching cards: " << p2HndMtch / 2 << endl << endl;
                
                // Player 2's turn
                while (true) {
                    cout << "Player 1, do you have: ";
                    cin>>snglCrd;
                    // Check if the card is in player 1's hand
                    size_t pos = p1Hand.find(snglCrd);
                    if (pos != string::npos) {
                        cout << "Yes, I have " << snglCrd << endl << endl;
                        // (logic for player 2 getting a card from player 1)
                        p1Hand.erase(pos, snglCrd.length()); // Remove card from p1 hand 
                        cout << "Player 2 you got a match! You get another turn!" << endl; // If secure card from other player get another turn
                        p2HndMtch ++; // Increment match count for player 2
                    } else {
                        cout << "No, I don't. Go Fish!" << endl << endl << endl;
                        // Add card to players hand if told "go fish"
                        if (players == plyr2) {
                            // Grab a card from the deck
                            int startIndex = p2Hand.length() * 2;  // Assuming each card occupies two characters (including space)
                            int endIndex = startIndex + 2;  // Assuming each card occupies two characters (including space)
                            string grabbedCard = shffld.substr(startIndex, 2);
                            cout << "Player 1 grabbed a card: " << grabbedCard << endl;
                            // Update player's hand and deck size
                            p1Hand += grabbedCard + " ";
                            deckSize--;
                            cout << "Player 1's updated hand: " << p1Hand << endl;
                            cout << "Deck size: " << deckSize << endl << endl;
                        }
                        break; // Exit the inner loop if Player 2 says "No"
                    }
                }

                break;
            }

            default:
                break;
        }
        // Check if the current player has no more cards in their hand
        if ((players == plyr1 && p1Hand.empty()) || (players == plyr2 && p2Hand.empty())) {
            cout << "Player " << players << ", you have no more cards in your hand. Grab a card from the deck!" << endl;
            // Grab a card from the deck
            int rndCard = rand() % 6 + 1;  // Adjust the range based on your card values
            string grabbedCard = to_string(rndCard);
            cout << "You grabbed a card: " << grabbedCard << endl;
            // Update the player's hand and deck size
            if (players == plyr1) {
                p1Hand += grabbedCard + " ";
            } else {
                p2Hand += grabbedCard + " ";
            }
            deckSize--;

            // Display the updated hands
            cout << "Updated hands:" << endl;
            cout << "Player 1's hand: " << p1Hand << endl;
            cout << "Player 2's hand: " << p2Hand << endl;
            cout << "Deck size: " << deckSize << endl << endl;
        }

        // Switch players for the next turn
        players = (players == plyr1) ? plyr2 : plyr1;
    }
 
    // Display final results
    cout << "Game Over!" << endl;
    cout << "Player 1's match count: " << p1HndMtch << endl;
    cout << "Player 2's match count: " << p2HndMtch << endl;
    
    
    //Exit the program
    return 0;
}
