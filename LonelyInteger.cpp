#include <string.h>
#include <limits>
#include <iostream>
#include <vector>
using namespace std;

#define MAX_NUMBER 100

int lonelyinteger(vector < int > a) {
    bool singles[MAX_NUMBER];
    memset( singles, '\0', sizeof(singles) );

    // Loop through each number setting or clearing the singles values
    for( std::vector<int>::iterator it = a.begin(); it!=a.end(); it++ ) {
        if( !singles[*it] ) {
            singles[*it] = true; // Found a single, add it
        }
        else {
           singles[*it] = false; // Found a dup, clear the value
        }
    }

    // Find the first single in the array
    for( int i=0; i<MAX_NUMBER; i++ ) {
        if( singles[i] ) return i;
    }
    return 0;

}
int main() {
    int res;

    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }

    res = lonelyinteger(_a);
    cout << res;

    return 0;
}
