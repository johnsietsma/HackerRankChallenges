/*
    https://www.hackerrank.com/challenges/simple-array-sum
    Given an array of NN integers, can you find the sum of its elements?
*/

#include <limits>
#include <iostream>

using namespace std;

int main() {
    int size;
    
    // The first line is the number of ints
    cin >> size;
    
    // Strip new lines
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    
    int item; // The current number we're processing
    int answer = 0; // The running count
    for(int i=0; i<size; i++) {
        cin >> item;
        
        // Add the number on
        answer += item;
    }

    cout << answer << endl;

    return 0;
}
