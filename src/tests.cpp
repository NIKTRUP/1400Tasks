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
            ASSERT(false);
        }

        void TestTask_17(){
            ASSERT(false);
        }
    }

    void Tests(){
        TestRunner runner;
        RUN_TEST(runner, tests::ch_1::TestTask_1);
        RUN_TEST(runner, tests::ch_1::TestTask_2);
        RUN_TEST(runner, tests::ch_1::TestTask_3);
        RUN_TEST(runner, tests::ch_1::TestTask_4);
        RUN_TEST(runner, tests::ch_1::TestTask_5);
        RUN_TEST(runner, tests::ch_1::TestTask_6);
        RUN_TEST(runner, tests::ch_1::TestTask_7);
        RUN_TEST(runner, tests::ch_1::TestTask_8);
        RUN_TEST(runner, tests::ch_1::TestTask_9);
        RUN_TEST(runner, tests::ch_1::TestTask_10);
        RUN_TEST(runner, tests::ch_1::TestTask_11);
        RUN_TEST(runner, tests::ch_1::TestTask_12);
        RUN_TEST(runner, tests::ch_1::TestTask_13);
        RUN_TEST(runner, tests::ch_1::TestTask_14);
        RUN_TEST(runner, tests::ch_1::TestTask_15);
        //RUN_TEST(runner, tests::ch_1::TestTask_16);
        //RUN_TEST(runner, tests::ch_1::TestTask_17);
    }
}