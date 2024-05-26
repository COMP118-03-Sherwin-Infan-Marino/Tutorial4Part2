/** \file Tutorial4Part2.cpp
 *  \brief     Does various actions on an matrix.
 *  \details   Implements the menu to calculate the sum of a specific row or column, fills with random values and also rpints matrix.
 *  \author    Sherwin Infan Marino.
 *  \version   0.1
 *  \date      2020-2020
 *  \copyright University of Nicosia.
 */

#include <iostream>
#include "matrix.h"
using namespace std;

// Fun prototypes
void showMenu();

/**
 * The <code>main</code> is the driver function that kick-starts the
 * application.
 * <BR>
 * @return Returns <code>0</code> on success, any other value otherwise.
 */
int main() {
    int choice = 0;
    srand(time(NULL));

    // Defining the matrix
    double mat[MAX_ROW][MAX_COL];
    double* sumRows;

    do {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            fillWithRandomNum(mat, MAX_ROW);
            break;
        case 2:
            int row;
            cout << "\nEnter the row you want to sum: ";
            cin >> row;

            cout << "\nSum of row is: " << sumOfRow(mat, row, MAX_ROW);
            break;
        case 3:
            int COL;
            cout << "\nEnter the column you want to sum: ";
            cin >> COL;

            cout << "\nSum of column is: " << sumOfCol(mat, COL, MAX_COL);
            break;
        case 4:
            printMatrix(mat, MAX_ROW);
            break;
        case 0:
            break;
        default:
            cerr << "\nWrong choice";
        }
    } while (choice != 0);

    cout << "\nHave a nice day:)";
    return 0;
}

/**
 * The <code>showMenu</code> function displays the menu options to the user.
 */
void showMenu() {
    cout << "\n1) Fill Matrix with random numbers";
    cout << "\n2) Sum of a specific row";
    cout << "\n3) Sum of a specific column";
    cout << "\n4) Show matrix";
    cout << "\n0) Exit";
    cout << "\nEnter choice: ";
}
