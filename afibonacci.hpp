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
        AFibonacci(int no);
        std::string getFibonacci();
};

#endif
