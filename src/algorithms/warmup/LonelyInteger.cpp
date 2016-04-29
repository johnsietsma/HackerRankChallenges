// https://www.hackerrank.com/challenges/lonely-integer

/*
There are NN integers in an array AA. All but one integer occur in pairs. Your task is to find the number that occurs only once.
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
    int answer = 0; // The unique number
    for(int i=0; i<size; i++) {
        cin >> item;
        
        // Because only a single number occurs once (and assuming other numbers occur exactly twice), then
        //   we can simply flip their bits on and off find the currect number.
        answer ^= item;
    }

    cout << answer << endl;

    return 0;
}
