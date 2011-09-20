#include "afibonacci.hpp"

std::string AFibonacci::getFibonacci(){
    std::string ret;
    Fibo::iterator it = fibonacci.begin();

    for(it; it < fibonacci.end(); it++)
        ret += (it->getResult() + ",");

    /* We could also use *--ret.end() */
    if( *ret.rbegin() == ',' )
        *ret.rbegin() = '\n';
    return ret;
}
