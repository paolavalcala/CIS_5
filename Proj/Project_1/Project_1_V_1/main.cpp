/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 26, 2024, 7:12 PM
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
    short players; //number of players up to 5 players
    char plyr1, plyr2, plyr3, plyr4, plyr5; // variables for all the different players
    
    short deckOfCards = 52; // deck of cards up to 52
    short numCards;
//    short card1 = 1, card2 = 2, card3 = 3, card4 = 4, card5 = 5, card6 = 6, card7 = 7, card8 = 8, card9 = 9, card10 = 10, card11 = 11, card12 = 12, card13 = 13, 
//            card14 = 1, card15 = 2, card16 = 3, card17 = 4, card18 = 5, card19 = 6, card20 = 7, card21 = 8, card22 = 9, card23 = 10, card24 = 11, card25 = 12, card26 = 13, 
//            card27 = 1, card28 = 2, card29 = 3, card30 = 4, card31 = 5, card32 = 6, card33 = 7, card34 = 8, card35 = 9, card36 = 10, card37 = 11, card38 = 12, card39 = 13, 
//            card40 = 1, card41 =2 , card42 = 3, card43 = 4, card44 = 5, card45 = 6, card46 = 7, card47 = 8, card48 = 9, card49 = 10, card50 = 11, card51 = 12, card52 = 13;

    short card1 = 1, card2 = 3, card3 = 3;
    //Initialize all variables 
    
//    deckOfCards = card1, card2, card3;
    
    //Process or Map Solutions
    
    
    //Display the output
    cout<<"Ready to play Go Fish?"<<endl;
    cout<<"You will need 2 - 5 players to play."<<endl;
    cout<<"Enter the number of players: "<<players<<endl;
    cin>>players;
    
    if (players >1 && players == 2){
        cout<<"Welcome Player 1 and Player 2!"<<endl;
    } else if (players == 3){
        cout<<"Welcome player 1, Player 2 and Player 3!"<<endl;
    } else if (players == 4){
        cout<<"Welcome player 1, Player 2, Player 3, and Player 4!"<<endl;
    } else {
        cout<<"Welcome player 1, Player 2, Player 3, Player 4, and player 5!"<<endl;
    }
    cout<<endl;
    

//    cout << "Number of cards: " << numCards << endl;

    cout << "Here is your deck of cards: " << deckOfCards << " cards" << endl;
    
    
    
    //Exit the program
    return 0;
}



//Today I am creating variables for players and cards. I am creating an input
//prompt for the players. I am also trying to figure out how to hold and display
//all 52 cards and their values in the variable: deckOfCards without using an array.