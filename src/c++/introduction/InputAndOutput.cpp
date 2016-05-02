// https://www.hackerrank.com/challenges/cpp-input-and-output

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int accum = 0;
    while (!cin.eof()) {
        int num;
        if (cin >> num) {
            accum += num;
        }
    }

    cout << accum;
    return 0;
}
