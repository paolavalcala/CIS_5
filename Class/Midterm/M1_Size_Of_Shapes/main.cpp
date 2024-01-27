/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on January 25, 2024
 * Purpose: Creating Shapes with characters! Problem 
 */

//System Libraries
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    switch (shape) {
        case 'f': // forward slash
            if (x % 2 == 0){ //even 
                for (int i = x; i >= 1; i--) { //starts counting at x
                    for (int j = 1; j <= x; j++) { //starts counting at 1
                        if (j == i) { // if j is positioned where i is 
                            cout << i; // print value at index
                        } else {
                            cout << " ";//else print space 
                        }
                    }
                    cout << endl;
                }
            }  else { //odd starts counting at 1
                for (int i = 1; i <= x; i++) {
                    for (int j = 1; j <= x; j++) {
                        if (j == x - i + 1) {
                            cout << i;
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }
            break;
        case 'b': // backward slash even 
            if (x % 2 == 0){ //even counts starting from 1
               for (int i = 1; i <= x; i++){ //if i <= x is true increment row
                   for (int j = 1; j <= x; j++){ //if i<= x is true increment column
                        if (i == j) { // if i and j in same position 
                            cout << i;//print the number at the index
                        } else {
                            cout << " "; //else print a space 
                        }
                    }
                   cout<<endl;
                }
            } else {   //backward slash odd
                for (int i = x; i >= 1; i--) { //odd counts starting from x
                    for (int j = 1; j <= x; j++) {
                        if (j == x - i + 1) {
                            cout << i; 
                        } else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
            }    
            break;
        case 'x': // cross
                    if (x % 2 == 0) { // even
                        for (int i = x; i >= 1; i--) {
                            for (int j = 1; j <= x; j++) {
                                if (i == j || j == x - i + 1) {
                                    if (j == x - i + 1 && j != i) {
                                        cout << j;
                                    } else {
                                        cout << i;
                                    }
                                } else {
                                    cout << " ";
                                }
                            }
                            cout << endl;
                        }
                    } else { // odd
                        for (int i = x; i >= 1; i--) {
                            for (int j = 1; j <= x; j++) {
                                if (i == j || j == x - i + 1) {
                                    if (j == x - i + 1 && j != x - i + 1) { 
                                        cout << i;
                                    } else {
                                        cout << j;
                                    }
                                } else {
                                    cout << " ";
                                }
                            }
                            cout << endl;
                        }
                    }
                    break;
    }  
    //Exit
    return 0;
}