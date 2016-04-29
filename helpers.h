#pragma once

#include <string>
#include <vector>

// Convert str into an integer
int string_to_int( const std::string& str );

// Splt str into a integers and put the result in data.
void split( std::string& str, std::vector<int>& data );

