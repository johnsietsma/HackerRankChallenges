/*
    https://www.hackerrank.com/challenges/a-very-big-sum
    You are given an array of integers of size NN. You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.
*/

#include <limits>
#include <iostream>
#include <limits>

using namespace std;

int main() {
    int size;
    
    // The first line is the number of ints
    cin >> size;
    
    // Strip new lines
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    
    int item; // The current number we're processing
    unsigned long long answer = 0; // The running count
    for(int i=0; i<size; i++) {
        cin >> item;
        
        // Check for overflow
        if( numeric_limits<unsigned long long>::max()-item <= answer ) 
        {
            cerr << item << " will overflow." <<endl;    
        }
        
        // Add the number on
        answer += item;
    }

    cout << answer << endl;

    return 0;
}
