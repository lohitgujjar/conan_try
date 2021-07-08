#include <iostream>

#include "hello.h"


void hello() {
    #ifdef NDEBUG
    // std::cout << "Hello World Release!" <<std::endl;
    #else
    //hello there
    std::cout << "Hello World Debug!" <<std::endl;
    std::cout <<"Hi there- conan testing" <<std::endl;
    #endif
}
