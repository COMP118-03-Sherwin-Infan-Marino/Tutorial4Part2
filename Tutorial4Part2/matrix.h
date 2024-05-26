/** \file matrix.h
 *  \brief     Does various actions on an matrix.
 *  \details    Implements the function prototypes to calculate the sum of a specific row or column, fills with random values and also rpints matrix.
 *  \author    Sherwin Infan Marino.
 *  \version   0.1
 *  \date      2020-2020
 *  \copyright University of Nicosia.
 */
#ifndef MATRIX_H
#define MATRIX_H

 // Global constant
const int MAX_ROW = 5;
const int MAX_COL = 5;
const int RANDOM_MIN = 0;
const int RANDOM_MAX = 50;

double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxCol);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);

bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow);
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow);
double sumOfDiagonal(const double mat[][MAX_COL], const int maxRow);
#endif 