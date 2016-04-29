/*
    https://www.hackerrank.com/challenges/plus-minus
    Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.
*/

#include <limits>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int size;
    
    // The first line is the number of ints
    cin >> size;
    
    // Strip new lines
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    
    double positiveAvg = 0;
    double negativeAvg = 0;
    double zeroAvg = 0;
    
    int item;
    for(int i=0; i<size; i++) {
        cin >> item;
        
        if( item==0 ) zeroAvg++;
        else if( item> 0 ) positiveAvg++;
        else negativeAvg++;
    }

    cout << setprecision(6) << fixed;
    cout << positiveAvg/size << endl;
    cout << negativeAvg/size << endl;
    cout << zeroAvg/size << endl;

    return 0;
}
