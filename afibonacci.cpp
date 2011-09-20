#include "afibonacci.hpp"

AFibonacci::AFibonacci(int no) : NO(no) { 
    Alphabeth f1("a"), f2("b");
    fibonacci.push_back(f1);
    fibonacci.push_back(f2);
    for(int i = 2; i < NO; i++) 
        fibonacci.push_back( fibonacci.at(i - 1) + fibonacci.at(i - 2) );
}


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
