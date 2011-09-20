#include "alphabeth.hpp"

std::string Alphabeth::getResult() {
    return this->result;
}

Alphabeth& Alphabeth::setResult(std::string res) {
    this->result = res;
    return *this;
}

/* new_result = left + right */
std::string Alphabeth::add( std::string left,  std::string right ) {
    std::string new_result = "";
    char chl, chr, res;
    int sum, CARRY = 0;
    std::string::iterator itl = left.end();
    std::string::iterator itr = right.end();

    if( left.length() == 0 || right.length() == 0 )
        throw "Cannot add empty strings.";

    /* Add two strings to each other and without storing */
    while( itl > left.begin() || itr > right.begin() || CARRY == 1) {
        --itl; --itr;
        
        /* Neutral character */
        chl = chr = NEUTRAL;

        if( !(itl < left.begin()) )
            chl = *itl;
        if( !(itr < right.begin()) )
            chr = *itr;

        sum = LETTERS.find(chl) + LETTERS.find(chr);
        res = LETTERS.at( (sum + CARRY) % l_length );
        sum >= l_length ? CARRY = 1 : CARRY = 0;

        new_result.insert(new_result.begin(), res );
    }

    /* Remove a's from the beginning */
    while( new_result.at(0) == 'a' )
        new_result.erase(new_result.begin());

    return new_result;
}

/* result += left */
std::string Alphabeth::add( std::string left ) {
    result = this->add( left, result );
    return result;
}

std::string Alphabeth::operator+(const std::string right) {
    return this->add( result, right );
}

Alphabeth Alphabeth::operator+( Alphabeth& right) {
    Alphabeth temp;
    temp.setResult( this->add( result, right.result ) );
    return temp;
}

std::string Alphabeth::operator=(const std::string right) {
    result = right;
    return result;
}
Alphabeth& Alphabeth::operator=(const Alphabeth& right) {
    result = right.result;
    return *this;
} 
    
