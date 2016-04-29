#include "helpers.h"

#include <assert.h>
#include <sstream>

using namespace std;

int string_to_int( const string& str )
{
    stringstream stream(str);
    int res;
    return (stream >> res) ? res : 0;
}

void split( string& str, vector<int>& data )
{
    size_t currStartPos = str.find_first_not_of( ' ' );
    size_t currEndPos = str.find_first_of( ' ', currStartPos );
    
    while( currStartPos != string::npos && currEndPos!=string::npos ) {
        assert( currEndPos > currStartPos );
        
        string token = str.substr( currStartPos, currEndPos-currStartPos );
        int number = string_to_int( token );
        data.push_back(number);
        
        currStartPos = str.find_first_not_of( ' ', currEndPos );
        currEndPos = str.find_first_of( ' ', currStartPos );
    }
}
