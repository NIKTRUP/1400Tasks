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

    // Функции возвращают ссылку на поток вывода, чтобы (при желании)
    // можно было последовтельно вызывать их с оператором "<<".

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

    std::ostream& Print16VarA(std::ostream& out  = std::cout);

    std::ostream& Print16VarB(std::istream& cin, std::ostream& out  = std::cout);

    std::ostream& Print16VarC(std::istream& cin, std::ostream& out  = std::cout);

    std::ostream& Print17VarA(std::ostream& out  = std::cout);

    std::ostream& Print17VarB(std::istream& cin, std::ostream& out  = std::cout);

    std::ostream& Print17VarC(std::istream& cin, std::ostream& out  = std::cout);
}

#endif //INC_1400PROGRAMMINGTASKS_CHAPTER_1_H
