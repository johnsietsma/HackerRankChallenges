/*
    https://www.hackerrank.com/challenges/time-conversion
    Given a time in AM/PM format, convert it to military (2424-hour) time.
*/

#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int string_to_int( const string& str )
{
    stringstream stream(str);
    int res;
    return (stream >> res) ? res : 0;
}


int main() {
    string timeStr;
    cin >> timeStr;

    string hourStr = timeStr.substr(0, 2);
    string minuteStr = timeStr.substr(3, 2);
    string secondStr = timeStr.substr(6, 2);
    string amPmStr = timeStr.substr(8,2);
    
    int hour = string_to_int(hourStr);
    if( amPmStr=="AM" ) hour = hour==12 ? 0 : hour;
    if( amPmStr=="PM" ) hour = hour==12 ? 12 : hour + 12;
    
    cout << setfill('0') << setw(2) << hour << ":" << minuteStr << ":" << secondStr << endl;
    
    return 0;
}
