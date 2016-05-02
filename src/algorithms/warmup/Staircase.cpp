/*
    https://www.hackerrank.com/challenges/staircase
    Your teacher has given you the task of drawing a staircase structure. Being an expert programmer, you decided to make a program to draw it for you instead. Given the required height, can you print a staircase as shown in the example?
*/

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int stairCount;
    
    // The number of stairs
    cin >> stairCount;
    
    cout.width(stairCount);
    for( int i=0; i<stairCount; i++)
    {
        cout.width(stairCount);
        cout << right << string(i+1, '#') << endl;
    }
    
    return 0;
}
