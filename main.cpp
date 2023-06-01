//#define NDEBUG
#include <iostream>
#include "./include/tests.h"

int main() {
#ifndef NDEBUG
    tests::Tests();
#endif
    std::cout << __FUNCTION__ << " is done! "<< std::endl;
    return 0;
}
