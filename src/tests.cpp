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

        }

        void TestTask_3(){

        }

        void TestTask_4(){

        }

        void TestTask_5(){

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
        }
    }

    void Tests(){
        TestRunner runner;
        RUN_TEST(runner, ch_1::TestDisplayingInformationOnScreen);
        RUN_TEST(runner, ch_2::TestCalculationsFormulas);
    }
}