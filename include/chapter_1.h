#ifndef INC_1400PROGRAMMINGTASKS_CHAPTER_1_H
#define INC_1400PROGRAMMINGTASKS_CHAPTER_1_H

#include <iostream>
#include <ostream>
#include <cmath>
#include <iomanip>
#include <string>

namespace ch_1{

    using namespace std::string_literals;

    static std::string input_error_message = "Ошибка ввода"s;

    std::ostream& Print_31_18_79(std::ostream& out = std::cout);

    std::ostream&  Print_47__52__150(std::ostream& out = std::cout);

    std::ostream&  Print_50n10(std::ostream& out = std::cout);

    std::ostream&  Print_5n10n21(std::ostream& out = std::cout);

    std::ostream&  Print_1n2(std::ostream& out = std::cout);

    // В <numbers> C++20 : pi_v
    std::ostream& PrintPi(int precision, std::ostream& out = std::cout);

    // В <numbers> C++20 : e_v
    std::ostream& PrintExp(int precision, std::ostream& out = std::cout);

    std::ostream& EnterNumberAndPrint1(std::istream& cin, std::ostream& out = std::cout);

    std::ostream& EnterNumberAndPrint2(std::istream& cin, std::ostream& out = std::cout);

    std::ostream& RepeatName(const std::string& name, std::ostream& out = std::cout);

    std::ostream& RepeatNameChampion(const std::string& name, std::ostream& out = std::cout);

    std::ostream& Hi(const std::string& name, std::ostream& out = std::cout);

    std::ostream& PrintCurrentPrevNextNumber(std::istream& cin, std::ostream& out  = std::cout);

    std::ostream& PrintThreeNumbers(std::istream& cin, std::ostream& out  = std::cout);

    std::ostream& PrintFourNumbers(std::istream& cin, std::ostream& out  = std::cout);

    void Task_16();

    void Task_17();


}

#endif //INC_1400PROGRAMMINGTASKS_CHAPTER_1_H
