#include <iostream>
#include "alphabeth.hpp"

int main() {
    Alphabeth a;
    Alphabeth b;
    Alphabeth c;
    std::cout << a.add("bbb", "ccc");
    std::cout << a.getResult() << std::endl;
    c = a.setResult("bbb") + b.setResult("aaa");
    std::cout << c.getResult()<<std::endl;
    c = c+c;
    std::cout << c.getResult()<<std::endl;
    c = c+c;
    std::cout << c.getResult()<<std::endl;
    c+c+c+c+c+c+c;
    std::cout << c.getResult()<<std::endl;
}
