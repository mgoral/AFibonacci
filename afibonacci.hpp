#ifndef iAFIBONACCI_HPP_GUARD
#define AFIBONACCI_HPP_GUARD

#include <vector>
#include "alphabeth.hpp"

class AFibonacci {
    private:
        typedef std::vector<Alphabeth> Fibo;
        int NO;
        Fibo fibonacci;
    
    public:
        AFibonacci(int no) : NO(no) { 
            Alphabeth f1("b"), f2("b");
            fibonacci.push_back(f1);
            fibonacci.push_back(f2);
            fibonacci.at(0).getResult();
            for(int i = 2; i < NO; i++) 
                fibonacci.push_back( fibonacci.at(i - 1) + fibonacci.at(i - 2) );
        }
        std::string getFibonacci();
};

#endif
