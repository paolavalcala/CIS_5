/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 30, 2024, 1:37 PM
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
    int deckSize = 36; //deck of 36 cards
    int card; //individual cards
    string shffld; // Variable to hold the shuffled deck
   
    
    //Initialize all variables 

    
    //Process or Map Solutions
    
    
    //Display the output
    //assign player 1 or 2 
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
    
    //initializing the deck of cards
    //prints out initial deck 
    cout << "Here is your Initial Deck of cards: ";
    
    for (int i = 1; i <= deckSize; ++i) {
        // Calculate the card value based on the position in the deck
        card = ((i - 1) % 9) + 1;
        
        cout << card << " ";
        
        // Add a newline every 13 cards for better formatting
        if (i % 9 == 0) {
            cout << endl;
        }
    }
    
    cout<<endl<<endl;
    
    
    // Shuffle the cards and store in the 'shffld' variable
    //Prints out your shufffled deck 
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = deckSize; i >= 1; --i) {
        int card = rand() % 9 + 1;
        shffld += to_string(card) + " ";

        if (i % 9 == 1) {
            shffld += "\n";
        }
    }
    
    cout << "Here is your shuffled deck:\n" << shffld <<endl;
    
    cout<<endl<<endl;
    
    //Prints out the split shuffled deck between hands
    //split the deck between players each
    
    //each player starts with 7 cards each 
    
    string p1Hand = "", p2Hand = ""; // Initialize player hands
//    for (int i = 1; i <= 14; ++i){
//        card = ((i - 1) % 13) + 1;
//        if (i <= 7) {
//            p1Hand += to_string(card) + " ";
//        } else {
//            p2Hand += to_string(card) + " ";
//        }
//    }
//    
    //cards should be handed to each player from the shffld deck 
    
    p1Hand = shffld.substr(0, 8);
    p2Hand = shffld.substr(8, 8);

    cout<<"Here is the shuffled deck split between Players:"<<endl;
    
    cout << "Player 1's hand: " << p1Hand << endl;
    cout << "Player 2's hand: " << p2Hand << endl;
    
    
    cout<<endl<<endl;
    
    // Print original hands with matches before the first turn starts
    cout << "Player 1's original hand: " << p1Hand << endl;
    cout << "Player 2's original hand: " << p2Hand << endl;
    
    // Pause for player 1 to view their hand and identify matches
    cout << "Press Enter to continue...";
    cin.ignore();  // Wait for Enter key

    
    
//  Prints out the game play     
//    //players ask each other for a card
    int snglCrd; //variable that holds the requested card by the players
    string p1HndMtch = ""; // String that holds the matching cards for p1Hand
    string p2HndMtch = ""; // String that holds the matching cards for p2Hand
    int matchCountP1 = 0;  // Counter for matches for player 1
    int matchCountP2 = 0;  // Counter for matches for player 2
    
    

        // Identify and display matches in player 1's hand
    cout << "Player 1, identify matches in your hand:" << endl;
    for (int i = 0; i < p1Hand.length(); ++i) {
        char card = p1Hand[i];
        size_t pos = p1Hand.find(card, i + 1); // Start searching for matches after the current card
        if (pos != string::npos) {
            p1HndMtch += card;
            matchCountP1++;

            // Remove the matched card from player 1's hand
            p1Hand.erase(pos, 1);
            // Remove the current card as well to avoid duplicate matches
            p1Hand.erase(i, 1);
            i--; // Adjust index after erasing a character
        }
    }
    // Display the matching cards
        cout << "Player 1's matching cards: " << p1HndMtch << endl <<endl;

    // Pause for player 2 to view their hand and identify matches
    cout << "Press Enter to continue...";
    cin.ignore();  // Wait for Enter key

    // Identify and display matches in player 2's hand
    cout << "Player 2, identify matches in your hand:" << endl;
    for (int i = 0; i < p2Hand.length(); ++i) {
        char card = p2Hand[i];
        size_t pos = p2Hand.find(card, i + 1); // Start searching for matches after the current card
        if (pos != string::npos) {
            p2HndMtch += card;
            matchCountP2++;

            // Remove the matched card from player 2's hand
            p2Hand.erase(pos, 1);
            // Remove the current card as well to avoid duplicate matches
            p2Hand.erase(i, 1);
            i--; // Adjust index after erasing a character
        }
    }
    cout << "Player 2's matching cards: " << p2HndMtch << endl <<endl;

    


   
    cout << "Game starts here:" << endl;
    // Game loop
    while (deckSize > 0) {
        // Display player hands
        if (players == plyr1) {
            cout << "Player 1 your turn!" << endl << endl;
            cout << "Player 1's hand: " << p1Hand << endl;
            cout << "Player 1's matching pile: " << p1HndMtch << endl << endl;
        }
        if (players == plyr2) {
            cout << "Player 2 your turn!" << endl << endl;
            cout << "Player 2's hand: " << p2Hand << endl;
            cout << "Player 2's matching pile: " << p2HndMtch << endl << endl;
        }

        // Players take turns
        switch (players) {
            case 1: {
                // Player 1's turn
                while (true) {
                    cout << "Player 2, do you have: ";
                    cin >> snglCrd;

                    // (Handle logic for player 1 drawing a card from the deck)
                    // Update p1Hand here
                    deckSize--; // Decrease deck size
                    p1Hand += to_string(snglCrd) + " "; // Add the card to player 1's hand

                    // Check if the card is in player 2's hand
                    size_t pos = p2Hand.find(to_string(snglCrd));
                    if (pos != string::npos) {
                        cout << "Yes, I have " << snglCrd << endl << endl;
                        // (Handle logic for player 1 getting a card from player 2)
                        p2Hand.erase(pos, to_string(snglCrd).length()); // Remove card from p2 hand
                        cout << "Player 1 you got a match! You get another turn!" << endl; // If secure card from other player get another turn
                        p1HndMtch += to_string(snglCrd) + " "; // Add the card to player 1's matching pile
                        matchCountP1++; // Increment match count for player 1
                    } else {
                        cout << "No, I don't. Go Fish!" << endl << endl << endl;
                        break; // Exit the inner loop if Player 2 says "No"
                    }
                }

                break;
            }
            case 2: {
                // Player 2's turn
                while (true) {
                    cout << "Player 1, do you have: ";
                    cin >> snglCrd;

                    // (Handle logic for player 2 drawing a card from the deck)
                    // Update p2Hand here
                    deckSize--; // Decrease deck size
                    p2Hand += to_string(snglCrd) + " "; // Add the card to player 2's hand

                    // Check if the card is in player 1's hand
                    size_t pos = p1Hand.find(to_string(snglCrd));
                    if (pos != string::npos) {
                        cout << "Yes, I have " << snglCrd << endl << endl;
                        // (Handle logic for player 2 getting a card from player 1)
                        p1Hand.erase(pos, to_string(snglCrd).length()); // Remove card from p1 hand 
                        cout << "Player 2 you got a match! You get another turn!" << endl; // If secure card from other player get another turn
                        p2HndMtch += to_string(snglCrd) + " "; // Add the card to player 2's matching pile
                        matchCountP2++; // Increment match count for player 2
                    } else {
                        cout << "No, I don't. Go Fish!" << endl << endl << endl;
                        break; // Exit the inner loop if Player 1 says "No"
                    }
                }

                break;
            }

            default:
                break;
        }

        // Switch players for the next turn
        players = (players == plyr1) ? plyr2 : plyr1;
    }
    //after each turn show players hands again 
    
    // the player must specify which card the are asking for form 1 to 13
    //using switch case if player2 doesnt have card player1 asked for 
    //player2 will tell player1 to go fish 
    
    // Display final results
    cout << "Game Over!" << endl;
    cout << "Player 1's matching pile: " << p1HndMtch << endl;
    cout << "Player 2's matching pile: " << p2HndMtch << endl;
    cout << "Player 1's Match Count: " << matchCountP1 << endl;
    cout << "Player 2's Match Count: " << matchCountP2 << endl;
    
    
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

//version 5
//I found a bug when i split the deck. I noticed that it splits the original deck
//in numerical order. It should split the shuffled deck instead.
//I decided to shrink my deck to 36 so it would be cards 1 - 9 4 times.
//This way I can use sub string function to split the chars in the shffld strng accuratley.
//adding the functionality where players ask each other for a card.
//adding functionality where players tell each other to go fish.


//Version 6
//figure out how to move card from one player hand to the other using the erase 
//built in function and string concatenation. 

//version 7
//figure out how to match cards and put in separate pile
//figure out how to count matches
//I am running into a bug where I can't add the matches to the match pile 
//I think it is because I am adding to the original hand first.
//what if the card is added to the original p1hand first and then moved into 
//the matching pile. I have to figure out a way to identify when to cards match 
//        and then move it into the matching pile.
//I also realized that I add logic before the game loop to check for initial matches 
//in p1Hand and p2Hand. If matches are found, move them to the corresponding matching 
//piles.

// adding functionality where player picks card from remaining shuffled deck 
//figure out how to pick card from remaing deck


//figure out how to keep score of matches 
//player with most matches win 