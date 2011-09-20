#include <iostream>
#include <cstdlib>
#include "afibonacci.hpp"

int main(int argc, char* argv[]) {
    int no = atoi( argv[1] );
    AFibonacci fib(no);

    std::cout << fib.getFibonacci();

    return 0;
}
