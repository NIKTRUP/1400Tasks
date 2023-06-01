#include "../include/chapter_1.h"

namespace ch_1{
    std::ostream& Print_31_18_79(std::ostream& out){
        out << 31 << " " << 18 << " " << 79;
        return out;
    }

    std::ostream&  Print_47__52__150(std::ostream& out){
        out << 47 << "  " << 52 << "  " << 150;
        return out;
    }

    std::ostream&  Print_50n10(std::ostream& out){
        out << 50 << '\n' << 10;
        return out;
    }

    std::ostream&  Print_5n10n21(std::ostream& out){
        out << 5 << '\n' << 10 << '\n'<< 21;
        return out;
    }

    std::ostream&  Print_1n2(std::ostream& out){
        out << 1 << '\n' << 2;
        return out;
    }

    // В <numbers> C++20 : pi_v
    std::ostream& PrintPi(int precision,std::ostream& out){
        out << std::setprecision(precision);
        out << M_PI;
        return out;
    }

    // В <numbers> C++20 : e_v
    std::ostream& PrintExp(int precision, std::ostream& out){
        out << std::setprecision(precision);
        out << std::exp(1.0);
        return out;
    }

    std::ostream& EnterNumberAndPrint1(std::istream& cin, std::ostream& out){
        double number = 0;
        cin >> number;
        if (cin.fail()) {
            out << input_error_message;
        }else{
            out << "Вы ввели число " << number;
        }
        return out;
    }

    std::ostream& EnterNumberAndPrint2(std::istream& cin, std::ostream& out){
        double number = 0;

        cin >> number;
        if (cin.fail()) {
            out << input_error_message;
        }else{
            out << number << " - вот какое число Вы ввели";
        }
        return out;
    }

    std::ostream& RepeatName(const std::string& name, std::ostream& out){
        out << name << " " << name;
        return out;
    }

    std::ostream& RepeatNameChampion(const std::string& name, std::ostream& out){
        out << name << " " << name << " - это чемпион!";
        return out;
    }

    std::ostream& Hi(const std::string& name, std::ostream& out){
        out << "Привет, " << name << "!";
        return out;
    }

    std::ostream& PrintCurrentPrevNextNumber(std::istream& cin, std::ostream& out){
        double number = 0;
        cin >> number;
        if (cin.fail()) {
            out << input_error_message;
        }else{
            out << "Следующее за числом " << number << " число - " << number + 1 << ".\n";
            out << "Для числа " << number << " предыдущее число - " << number - 1 << ".\n";
        }
        return out;
    }

    std::ostream& PrintThreeNumbers(std::istream& cin, std::ostream& out){
        double number1 = 0, number2 = 0, number3 = 0;

        cin >> number1 >> number2 >> number3;
        if (cin.fail()) {
            out << input_error_message;
        }else{
            out << number1 << "  " << number2 << "  " << number3;
        }
        return out;
    }

    std::ostream& PrintFourNumbers(std::istream& cin, std::ostream& out){
        double number1 = 0, number2 = 0, number3 = 0, number4 = 0;
        cin >> number1 >> number2 >> number3 >> number4 ;
        if (cin.fail()) {
            out << input_error_message;
        }else{
            out << number1 << " " << number2 << " " << number3 << " " << number4;
        }
        return out;
    }
}