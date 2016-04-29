/*
    https://www.hackerrank.com/challenges/diagonal-difference
    Given a square matrix of size N×NN×N, calculate the absolute difference between the sums of its diagonals.
*/

#include <assert.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


int string_to_int( const string& str )
{
    stringstream stream(str);
    int res;
    return (stream >> res) ? res : 0;
}


int main() {
    size_t matrixSize;
    
    // The first line is the number of ints
    cin >> matrixSize;

    // Our running count    
    int diagonalSum1 = 0;
    int diagonalSum2 = 0;
    
    // The current index of the diagonals within the row
    size_t diagonalIndex1 = 0;
    size_t diagonalIndex2 = matrixSize-1;
    
    // Working buffer for the numbers within a row
    vector<int> rowNumbers;
    rowNumbers.reserve(matrixSize);
    
    for(size_t rowIndex=0; rowIndex<matrixSize; rowIndex++) {
        rowNumbers.clear();
        // Extract all the numbers in the row
        for(size_t colIndex=0; colIndex<matrixSize; colIndex++) {
            string numString;
            cin >> numString;
            rowNumbers.push_back( string_to_int(numString) );
        }

        assert( diagonalIndex1 < matrixSize );
        assert( diagonalIndex2 >= 0 );
        
        // Grab the correct numbers and sum them
        diagonalSum1 += rowNumbers[diagonalIndex1++];
        diagonalSum2 += rowNumbers[diagonalIndex2--];
    }

    cout << abs(diagonalSum1-diagonalSum2) << endl;

    return 0;
}
