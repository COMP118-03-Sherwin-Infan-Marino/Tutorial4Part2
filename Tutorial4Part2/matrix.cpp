/** \file matrix.cpp
 *  \brief     Does various actions on an matrix.
 *  \details   Implements the functions to calculate the sum of a specific row or column, fills with random values and also rpints matrix.
 *  \author    Sherwin Infan Marino.
 *  \version   0.1
 *  \date      2020-2020
 *  \copyright University of Nicosia.
 */
#include <iostream>
#include <cassert>
#include "matrix.h"

using namespace std;

/**
 * The <code>sumOfRow</code> function sums up the values of one specific row and
 * returns this sum.
 * <BR>
 * @param mat The matrix.
 * @param row The specific row that we want to sum up
 * @param maxRow How many rows the matrix have.
 */
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
    assert(row >= 0 && row < maxRow);
    double sum = 0;

    for (int i = 0; i < MAX_COL; ++i)
        sum += mat[row][i];

    return sum;
}

/**
 * The <code>fillWithRandomNum</code> function initializes the matrix with random numbers,
 * in the range of <code>RANDOM_MIN</code> - <code>RANDOM_MAX</code>.
 * <BR>
 * @param mat The matrix to be initialized with random numbers
 * @param maxRow How many rows the matrix have.
 */
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {


    for (int i = 0; i < maxRow; ++i) {
        for (int j = 0; j < MAX_COL; ++j)
            mat[i][j] = rand() % RANDOM_MAX; 
    }
}

/**
 * The <code>printMatrix</code> function shows the content of the matrix.
 * <BR>
 * @param mat The matrix to be shown
 * @param maxRow How many rows the matrix have.
 */
void printMatrix(const double mat[][MAX_COL], const int maxRow) {

    cout << "\n\nContent of matrix";

    for (int i = 0; i < maxRow; ++i) { 
        cout << "\nRow " << i << ": ";
        for (int j = 0; j < MAX_COL; ++j)
            cout << mat[i][j] << "\t"; 
    }
    cout << endl;
}

/**
 * The <code>sumOfRow</code> function sums up the values of one specific column and
 * returns this sum.
 * <BR>
 * @param mat The matrix.
 * @param row The specific row that we want to sum up
 * @param maxRow How many rows the matrix have.
 */
double sumOfCol(const double mat[][MAX_COL], const int col, const int maxCol) {
    assert(col >= 0 && col < maxCol);
    double sum = 0;

    for (int i = 0; i < MAX_COL; ++i)
        sum += mat[i][col];

    return sum;
}