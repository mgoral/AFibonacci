#include "alphabeth.hpp"
#include <iostream>

std::string Alphabeth::getResult() {
    return this->result;
}

std::string Alphabeth::add( std::string left, std::string right ) {
    result = "";
    char chl, chr, res;
    int sum, CARRY = 0;
    std::string::iterator itl = left.end();
    std::string::iterator itr = right.end();

    if( left.length() == 0 || right.length() == 0 )
        throw "Cannot add empty strings.";

    /* Add two strings to each other and store the result
       in this->result */
    while( itl > left.begin() || itr > right.begin() || CARRY == 1) {
        --itl; --itr;
        
        /* Neutral character */
        chl = chr = NEUTRAL;

        if( !(itl < left.begin()) )
            chl = *itl;
        if( !(itr < right.begin()) )
            chr = *itr;

        sum = LETTERS.find(chl) + LETTERS.find(chr);
        res = LETTERS.at( sum % l_length + CARRY);
        sum >= l_length ? CARRY = 1 : CARRY = 0;

        result.insert(result.begin(), res );
    }

    /* Remove a's from the beginning */
    while( result.at(0) == 'a' )
        result.erase(result.begin());

    return result;
}
