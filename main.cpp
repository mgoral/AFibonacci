#include <iostream>
#include "alphabeth.hpp"

int main() {
    Alphabeth a;
    a.add("ZZzZab", "aaaaaaaab");
    std::cout << std::endl << a.getResult();
}
