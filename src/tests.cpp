#include "../include/tests.h"

namespace tests {

    namespace ch_1{
        void TestTask_1(){
            std::stringstream ss;
            ::ch_1::Print_31_18_79(ss);
            std::stringstream ss_test;
            ss_test << 31 << " " << 18 << " " << 79;
            ASSERT(ss.str() == ss_test.str());
        }

        void TestTask_2(){
            std::stringstream ss;
            ::ch_1::Print_47__52__150(ss);
            std::stringstream ss_test;
            ss_test << 47 << "  " << 52 << "  " << 150;
            ASSERT(ss.str() == ss_test.str());
        }

        void TestTask_3(){
            std::stringstream ss;
            ::ch_1::Print_50n10(ss);
            std::stringstream ss_test;
            ss_test << 50 << '\n'
                    << 10;
            ASSERT(ss.str() == ss_test.str());
        }

        void TestTask_4(){
            std::stringstream ss;
            ::ch_1::Print_5n10n21(ss);
            std::stringstream ss_test;
            ss_test << 5 << '\n'
                    << 10 << '\n'
                    << 21;
            ASSERT(ss.str() == ss_test.str());
        }

        void TestTask_5(){
            std::stringstream ss;
            ::ch_1::Print_1n2(ss);
            std::stringstream ss_test;
            ss_test << 1 << '\n'
                    << 2;
            ASSERT(ss.str() == ss_test.str());
        }

        void TestTask_6(){
            int precision = 4;
            std::stringstream ss;
            ::ch_1::PrintPi(precision,ss);
            std::stringstream ss_test;
            ss_test << 3.142;
            ASSERT(ss.str() == ss_test.str());
        }

        void TestTask_7(){
            int precision = 2;
            std::stringstream ss;
            ::ch_1::PrintExp(precision,ss);
            std::stringstream ss_test;
            ss_test << 2.7;
            ASSERT(ss.str() == ss_test.str());
        }

        void TestTask_8(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::EnterNumberAndPrint1(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "Вы ввели число 10";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::EnterNumberAndPrint1(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }
        }

        void TestTask_9(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::EnterNumberAndPrint2(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 - вот какое число Вы ввели";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::EnterNumberAndPrint2(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }
        }

        void TestTask_10(){
            std::string name = "Leha" ;
            std::stringstream ss_out;
            ::ch_1::RepeatName(name, ss_out);
            std::stringstream ss_test;
            ss_test << "Leha Leha";
            ASSERT(ss_out.str() == ss_test.str());
        }

        void TestTask_11(){
            std::string name = "Leha" ;
            std::stringstream ss_out;
            ::ch_1::RepeatNameChampion(name, ss_out);
            std::stringstream ss_test;
            ss_test << "Leha Leha - это чемпион!";
            ASSERT(ss_out.str() == ss_test.str());
        }

        void TestTask_12(){
            std::string name = "Leha" ;
            std::stringstream ss_out;
            ::ch_1::Hi(name, ss_out);
            std::stringstream ss_test;
            ss_test << "Привет, Leha!";
            ASSERT(ss_out.str() == ss_test.str());
        }

        void TestTask_13(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::PrintCurrentPrevNextNumber(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "Следующее за числом 10 число - 11." << '\n'
                        << "Для числа 10 предыдущее число - 9." << '\n';
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::PrintCurrentPrevNextNumber(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }
        }

        // TODO:: написать функцию, обобщающую тесты:
        // Example : bool Tests(function, istream&, ostream& out , ostream& test)

        void TestTask_14(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10  11  12";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 11 << 12 ;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << "    " << 11 << "  " << 124;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10  11  124";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12 << " " << 155;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10  11  12";
                ASSERT(ss_out.str() == ss_test.str());
            }
        }

        void TestTask_15(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12 << " " << 15;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 11 12 15";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12 ;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 11 << 12  << 15;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12 << " " << 15 << "  " << 125;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 11 12 15";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << "   " << 11 << "     " << 12 << "   " << 15;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 11 12 15";
                ASSERT(ss_out.str() == ss_test.str());
            }
        }

        void TestTask_16(){
            // а)
            {
                std::stringstream ss_out;
                ::ch_1::Print16VarA(ss_out);
                std::stringstream ss_test;
                ss_test << "5 10\n";
                ss_test << "7 см\n";
                ASSERT(ss_out.str() == ss_test.str());
            }
            // б)
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 15;
                ::ch_1::Print16VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "100 10\n";
                ss_test << "1949 15\n";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::Print16VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 15;
                ::ch_1::Print16VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }
            // в)
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 15;
                ::ch_1::Print16VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 25\n";
                ss_test << "10 15\n";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::Print16VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 15;
                ::ch_1::Print16VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }
        }

        void TestTask_17(){
            // а)
            {
                std::stringstream ss_out;
                ::ch_1::Print17VarA(ss_out);
                std::stringstream ss_test;
                ss_test << "2 кг\n";
                ss_test << "13 17\n";
                ASSERT(ss_out.str() == ss_test.str());
            }
            // б)
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 15;
                ::ch_1::Print17VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 1\n";
                ss_test << "19 15\n";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::Print17VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 15;
                ::ch_1::Print17VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }
            // в)
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 15;
                ::ch_1::Print17VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 15\n";
                ss_test << "5 15\n";
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::Print17VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 15;
                ::ch_1::Print17VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str());
            }
        }

        void TestDisplayingInformationOnScreen(){
            tests::ch_1::TestTask_1();
            tests::ch_1::TestTask_2();
            tests::ch_1::TestTask_3();
            tests::ch_1::TestTask_4();
            tests::ch_1::TestTask_5();
            tests::ch_1::TestTask_6();
            tests::ch_1::TestTask_7();
            tests::ch_1::TestTask_8();
            tests::ch_1::TestTask_9();
            tests::ch_1::TestTask_10();
            tests::ch_1::TestTask_11();
            tests::ch_1::TestTask_12();
            tests::ch_1::TestTask_13();
            tests::ch_1::TestTask_14();
            tests::ch_1::TestTask_15();
            tests::ch_1::TestTask_16();
            tests::ch_1::TestTask_17();
        }
    }

    namespace ch_2{

        void TestTask_1(){
            double eps = 1e-16;
            {
                double a = 17, b = -6, c = 13;
                ASSERT(std::abs(24 - ::ch_2::CalculateParabolicEquation(1, a, b, c)) <= eps)

                ASSERT(std::abs(13 - ::ch_2::CalculateParabolicEquation(0, a, b, c)) <= eps)

                ASSERT(std::abs(36 - ::ch_2::CalculateParabolicEquation(-1, a, b, c)) <= eps)

                ASSERT(std::abs(169413 - ::ch_2::CalculateParabolicEquation(100, a, b, c)) <= eps)
            }

            {
                double a = 3, b = 5, c = -21;
                ASSERT(std::abs(-13 - ::ch_2::CalculateParabolicEquation(1, a, b, c)) <= eps)

                ASSERT(std::abs(-21 - ::ch_2::CalculateParabolicEquation(0, a, b, c)) <= eps)

                ASSERT(std::abs(-23 - ::ch_2::CalculateParabolicEquation(-1, a, b, c)) <= eps)

                ASSERT(std::abs(30479 - ::ch_2::CalculateParabolicEquation(100, a, b, c)) <= eps)
            }
        }

        void TestTask_2(){
            double eps = 1e-11;
            auto function_task_2 = [](double a){
                return (a*a + 10)/(std::sqrt(a*a + 1));
            };

            ASSERT(std::abs(10 - function_task_2(0)) < eps);
            ASSERT(std::abs(7.77817459305 - function_task_2(1)) < eps);
            ASSERT(std::abs(7.77817459305 - function_task_2(-1)) < eps);
            ASSERT(std::abs(10000.00095 - function_task_2(10000)) < 1e-5);
        }

        void TestTask_3(){
            double eps = 1e-10;
            {
                auto function_task_3a = [](double a){
                    return (std::sqrt(std::complex<double>((2*a + std::sin(std::abs(3*a)))/3.56)));
                };

                ASSERT(std::abs(function_task_3a(0).real()) < eps);
                ASSERT(std::abs(0.775524470608 - function_task_3a(1).real()) < eps);
                ASSERT(std::abs(2.3109393231 - function_task_3a(10).real()) < eps);
                ASSERT(std::abs(0.192586684092 - function_task_3a(-0.4).real()) < eps);
                ASSERT(std::abs(0.0265265046378 - function_task_3a(-0.5).imag()) < eps);
            }

            {
                auto function_task_3b = [](double x){
                    if(x == 0.0){
                        return std::optional<std::complex<double>>{std::nullopt};
                    }
                    return std::optional<std::complex<double>>(
                            std::sin((3.2 + std::sqrt(std::complex<double>(1 + x)))/(std::abs(5*x)))
                            );
                };
                ASSERT(function_task_3b(0).has_value() == false);
                ASSERT(function_task_3b(1).has_value() && std::abs(0.797320575602 - function_task_3b(1).value().real()) < eps)
                ASSERT(function_task_3b(10).has_value() && std::abs(0.12996382562 - function_task_3b(10).value().real()) < eps)
                ASSERT(function_task_3b(-1).has_value() && std::abs(0.597195441362 - function_task_3b(-1).value().real()) < eps)
                ASSERT(function_task_3b(-2).has_value() && std::abs(0.31614070455 - function_task_3b(-2).value().real()) < eps)
                ASSERT(function_task_3b(-2).has_value() && std::abs(0.095081826833 - function_task_3b(-2).value().imag()) < eps)
            }
        }

        void TestTask_4(){
            ASSERT(::ch_2::CalculatePerimeterSquare(10) == 40);
            ASSERT(::ch_2::CalculatePerimeterSquare(-10).has_value() == false);
            ASSERT(::ch_2::CalculatePerimeterSquare(0) == 0);
            ASSERT(::ch_2::CalculatePerimeterSquare(1) == 4);
        }

        void TestTask_5(){
            ASSERT(::ch_2::CalculateDiameterCircle(10) == 20);
            ASSERT(::ch_2::CalculateDiameterCircle(-10).has_value() == false);
            ASSERT(::ch_2::CalculateDiameterCircle(0) == 0);
            ASSERT(::ch_2::CalculateDiameterCircle(1) == 2);
        }

        void TestTask_6(){

        }

        void TestTask_7(){

        }

        void TestTask_8(){

        }

        void TestTask_9(){

        }

        void TestTask_10(){

        }

        void TestTask_11(){

        }

        void TestTask_12(){

        }

        void TestTask_13(){

        }

        void TestTask_14(){

        }

        void TestTask_15(){

        }

        void TestTask_16(){

        }

        void TestTask_17(){

        }

        void TestCalculationsFormulas(){
            ch_2::TestTask_1();
            ch_2::TestTask_2();
            ch_2::TestTask_3();
            ch_2::TestTask_4();
            ch_2::TestTask_5();
        }
    }

    void Tests(){
        TestRunner runner;
        RUN_TEST(runner, ch_1::TestDisplayingInformationOnScreen);
        RUN_TEST(runner, ch_2::TestCalculationsFormulas);
    }
}