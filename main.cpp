//#define NDEBUG
#include <iostream>
#include "./include/log_duration.h"
#include "./include/tests.h"

int main() {
#ifndef NDEBUG
    {
        LOG_DURATION("Tests");
        tests::Tests();
    }
#endif
    std::cout << __FUNCTION__ << " is done! "<< std::endl;
    return 0;
}
