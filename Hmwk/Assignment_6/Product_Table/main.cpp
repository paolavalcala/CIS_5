/* 
 * File:   main.cpp
 * Author: Paola Alcala
 *
 * Created on February 6, 2024, 11:12 PM
 * Purpose: Create a Product Table Problem
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
void fillTbl(int arr[][8], int rows, int cols);
void prntTbl(const int arr[][8], int rows, int cols);

// Execution Begins Here
int main(int argc, char** argv) {
    int rows, cols;

    // Prompt the user to enter the number of rows and columns
    cout << "Enter the number of rows (2 - 8): ";
    cin >> rows;
    cout << "Enter the number of columns (2 - 8): ";
    cin >> cols;

    // Declare the table with user-defined size
    int tablProd[8][8];

    // Initialize the table
    fillTbl(tablProd, rows, cols);

    // Display the table
    cout<<"Think of this as a Product/Muliplication Table"<<endl;
    prntTbl(tablProd, rows, cols);

    return 0;
}

// Function to fill the table
void fillTbl(int arr[][8], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
}

// Function to print the table
void prntTbl(const int arr[][8], int rows, int cols) {
    cout << "           C o l u m n s" << endl;
    cout << setw(6) << "|";
    for (int i = 1; i <= cols; i++) {
        cout << setw(4) << i;
    }
    cout << endl;

    cout << "---------------------------" << endl;

    string word = " ROWS ";

    for (int i = 0; i < rows; i++) {
        cout << word[i] << setw(3) << i + 1 << " |";
        for (int j = 0; j < cols; j++) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
}