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
            auto cube = ::ch_2::CalculateCubeParameters(3);
            ASSERT(cube->side_area == 9 && cube->volume == 27);
            cube = ::ch_2::CalculateCubeParameters(-10);
            ASSERT(cube.has_value() == false);
            cube = ::ch_2::CalculateCubeParameters(0);
            ASSERT(cube->side_area == 0 && cube->volume == 0);
            cube = ::ch_2::CalculateCubeParameters(1);
            ASSERT(cube->side_area == 1 && cube->volume == 1);
            cube = ::ch_2::CalculateCubeParameters(10);
            ASSERT(cube->side_area == 100 && cube->volume == 1000);
        }

        void TestTask_8(){

            double eps = 1e-16;
            double  radius_t1 = 3,
                    radius_t2 = -10,
                    radius_t3 = 0,
                    radius_t4 = 1,
                    radius_t5 = 10;

            auto test = [eps](double radius, std::optional<::ch_2::Circle> circle){
                return (circle->radius == radius &&
                        std::abs(2*M_PI*radius - circle->lenght) < eps &&
                        std::abs(M_PI*radius*radius - circle->area) < eps);
            };

            auto circle = ::ch_2::CalculateCircleParameters(radius_t1);
            ASSERT(test(radius_t1, circle));
            circle = ::ch_2::CalculateCircleParameters(radius_t2);
            ASSERT(circle.has_value() == false);
            circle = ::ch_2::CalculateCircleParameters(radius_t3);
            ASSERT(test(radius_t3, circle));
            circle = ::ch_2::CalculateCircleParameters(radius_t4);
            ASSERT(test(radius_t4, circle));
            circle = ::ch_2::CalculateCircleParameters(radius_t5);
            ASSERT(test(radius_t5, circle));
        }

        void TestTask_9(){
            double eps = 1e-10;
            {
                auto function_9a = [](double x, double y){
                    return 2*x*x*x - 3.44*x*y + 2.3*x*x - 7.1*y;
                };
                ASSERT(std::abs(function_9a(0, 0)) < eps);
                ASSERT(std::abs(3.96 - function_9a(-1, -1)) < eps);
                ASSERT(std::abs(-6.24 - function_9a(1, 1)) < eps);
            }

            {
                auto function_9b = [](double a, double b){
                    double c = (a+b);
                    return 3.14*c*c*c + 2.75*b*b - 12.7*a - 4.1;
                };
                ASSERT(std::abs(-4.1 - function_9b(0, 0)) < eps);
                ASSERT(std::abs(-13.77 - function_9b(-1, -1)) < eps);
                ASSERT(std::abs(11.07 - function_9b(1, 1)) < eps);
            }
        }

        void TestTask_10(){
            double eps = 1e-16;
            auto average = [](int lhs, int rhs){
                return (static_cast<double>(lhs + rhs)) / 2.0;
            };

            ASSERT(std::abs(average(0, 0))< eps)
            ASSERT(std::abs(0.5 - average(1, 0))< eps)
            ASSERT(std::abs(4.0 - average(4, 4))< eps)
            ASSERT(std::abs(55 - average(10, 100))< eps)
            ASSERT(std::abs(-55 - average(-100, -10))< eps)

            auto geometric_avg = [](int lhs, int rhs){
                if( (lhs > 0 && rhs < 0) || (lhs < 0 && rhs > 0)){
                    return std::optional<double>{std::nullopt};
                }
                return std::optional<double>{std::sqrt(lhs*rhs)};
            };

            ASSERT(std::abs(geometric_avg(0, 0).value())< eps)
            ASSERT(std::abs(geometric_avg(1, 0).value())< eps)
            ASSERT(std::abs(4.0 - geometric_avg(4, 4).value())< eps)
            ASSERT(std::abs(100 - geometric_avg(10, 1000).value())< eps)
            ASSERT(std::abs(100 - geometric_avg(-1000, -10).value())< eps)
            ASSERT(std::abs(4.47213595499958 - geometric_avg(4, 5).value())< eps)
            ASSERT(geometric_avg(-1000, 10).has_value() == false)

        }

        void TestTask_11(){
            double eps = 1e-16;
            ASSERT(std::abs(1 - ::ch_2::CalculateDensity(2, 2).value()) < eps)
            ASSERT(std::abs(0.2 - ::ch_2::CalculateDensity(2, 10).value()) < eps)
            ASSERT(std::abs(5 - ::ch_2::CalculateDensity(10, 2).value()) < eps)
            ASSERT(::ch_2::CalculateDensity(2, 0).has_value() == false)
            ASSERT(::ch_2::CalculateDensity(2, -1).has_value() == false)
            ASSERT(::ch_2::CalculateDensity(-1, 2).has_value() == false)
        }

        void TestTask_12(){
            double eps = 1e-16;
            ASSERT(std::abs(1.0 - ::ch_2::CalculatePopulationDensity(2000, 2000).value()) < eps)
            ASSERT(std::abs(0.2 - ::ch_2::CalculatePopulationDensity(2000, 10000).value()) < eps)
            ASSERT(std::abs(5 - ::ch_2::CalculatePopulationDensity(10000, 2000).value()) < eps)
            ASSERT(::ch_2::CalculatePopulationDensity(2000, 0).has_value() == false)
            ASSERT(::ch_2::CalculatePopulationDensity(2000, -1).has_value() == false)
            ASSERT(::ch_2::CalculatePopulationDensity(-1, 2000).has_value() == false)
        }

        void TestTask_13(){
            double eps = 1e-16;
            ASSERT(std::abs(-1.0 - ::ch_2::SolveLinearEquation(2, 2).value()) < eps)
            ASSERT(std::abs(-5 - ::ch_2::SolveLinearEquation(2, 10).value()) < eps)
            ASSERT(std::abs(-0.2 - ::ch_2::SolveLinearEquation(10, 2).value()) < eps)
            ASSERT(std::abs(-0.2 - ::ch_2::SolveLinearEquation(-10, -2).value()) < eps)
            ASSERT(std::abs(0.2 - ::ch_2::SolveLinearEquation(-10, 2).value()) < eps)
            ASSERT(::ch_2::SolveLinearEquation(0, 2000).has_value() == false)
        }

        void TestTask_14(){
            double eps = 1e-10;
            ASSERT(std::abs(2.82842712475 - ::ch_2::CalculateHypotenuse(2, 2).value()) < eps)
            ASSERT(std::abs(10.1980390272 - ::ch_2::CalculateHypotenuse(2, 10).value()) < eps)
            ASSERT(std::abs(10.1980390272  - ::ch_2::CalculateHypotenuse(10, 2).value()) < eps)
            ASSERT(::ch_2::CalculateHypotenuse(2, 0).has_value() == false)
            ASSERT(::ch_2::CalculateHypotenuse(0, 0).has_value() == false)
            ASSERT(::ch_2::CalculateHypotenuse(2, -1).has_value() == false)
            ASSERT(::ch_2::CalculateHypotenuse(-1, 2).has_value() == false)
        }

        void TestTask_15(){
            double eps = 1e-8;
            ASSERT(std::abs(301.592894745  - ::ch_2::CalculateAreaRing(10, 2).value()) < eps)
            ASSERT(::ch_2::CalculateAreaRing(2, 0).has_value() == false)
            ASSERT(::ch_2::CalculateAreaRing(0, 0).has_value() == false)
            ASSERT(::ch_2::CalculateAreaRing(2, -1).has_value() == false)
            ASSERT(::ch_2::CalculateAreaRing(-1, 2).has_value() == false)
            ASSERT(::ch_2::CalculateAreaRing(2, 2).has_value() == false)
            ASSERT(::ch_2::CalculateAreaRing(2, 10).has_value() == false)
        }

        void TestTask_16(){
            double eps = 1e-9;
            ASSERT(std::abs(12 - ::ch_2::CalculatePerimeterTriangle(4, 3).value()) < eps)
            ASSERT(std::abs(12 - ::ch_2::CalculatePerimeterTriangle(3, 4).value()) < eps)
            ASSERT(std::abs(19.0622577483 - ::ch_2::CalculatePerimeterTriangle(7, 4).value()) < eps)
            ASSERT(::ch_2::CalculatePerimeterTriangle(2, 0).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterTriangle(0, 0).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterTriangle(2, -1).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterTriangle(-1, 2).has_value() == false)
        }

        void TestTask_17(){
            double eps = 1e-9;
            ASSERT(std::abs(10 - ::ch_2::CalculatePerimeterTrapezoid(2, 2, 3).value()) < eps)
            ASSERT(std::abs(24 - ::ch_2::CalculatePerimeterTrapezoid(10, 4, 4).value()) < eps)
            ASSERT(std::abs(24 - ::ch_2::CalculatePerimeterTrapezoid(4, 10, 4).value()) < eps)
            ASSERT(std::abs(27.313708499 - ::ch_2::CalculatePerimeterTrapezoid(12, 4, 4).value()) < eps)
            ASSERT(std::abs(27.313708499 - ::ch_2::CalculatePerimeterTrapezoid(4, 12, 4).value()) < eps)
            ASSERT(::ch_2::CalculatePerimeterTrapezoid(2, 0, 1).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterTrapezoid(0, 0, 1).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterTrapezoid(2, -1, 1).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterTrapezoid(-1, 2, 1).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterTrapezoid(2, 2, -1).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterTrapezoid(2, 2, 0).has_value() == false)
        }

        void TestTask_18(){
            double eps = 1e-9;
            auto z = [](double x, double y){
                if(x == 0 || y == -1/(std::sqrt(x*x + 10))){
                    return std::optional<double>{std::nullopt};
                }
                double denominator = y + 1.0/std::sqrt(x*x + 10);
                return std::optional<double>{(x + (2 + y)/(x*x))/denominator};
            };

            {
                ASSERT(std::abs(3.07335008386 - z(1, 1).value()) < eps);
                ASSERT(z(0, 1).has_value() == false);
            }

            auto q = [](double x, double y){
                return 7.25*sin(x) - std::abs(y);
            };

            {
                ASSERT(std::abs(6.10066463986 - q(1, 0)) < eps);
                ASSERT(std::abs(5.10066463986 - q(1, 1)) < eps);
                ASSERT(std::abs(q(0, 0)) < eps);
            }
        }

        void TestTask_19(){
            double eps = 1e-10;

            auto x = [](double a, double b){
                if(a ==0 && b == 0){
                    return std::optional<std::complex<double>>{std::nullopt};
                }
                return std::optional<std::complex<double>>{(2/(a*a + 25) + b)/(std::sqrt(std::complex(b)) + (a + b)/2.0 )};
            };

            {
                ASSERT(std::abs(0.53846153846 - x(1, 1).value().real()) < eps)
                ASSERT(std::abs(1.36544757746 - x(2, -2).value().imag()) < eps)
                ASSERT(x(0, 0).has_value() == false)
            }

            auto y = [](double a, double b){
                if(a == 0){
                    return std::optional<double>{std::nullopt};
                }
                return std::optional<double>{(std::abs(a) + 2*std::sin(b))/(5.5*a)};
            };

            {
                ASSERT(std::abs(0.18181818181 - y(1, 0).value()) < eps)
                ASSERT(std::abs(-0.18181818181 - y(-1, 0).value()) < eps)
                ASSERT(std::abs(0.48780763083 - y(1, 1).value()) < eps)
                ASSERT(std::abs(-0.16203559596 - y(-10, 10).value()) < eps)
                ASSERT(y(0, 0).has_value() == false)
            }
        }

        void TestTask_20(){

        }

        void TestTask_21(){

        }

        void TestTask_22(){

        }

        void TestTask_23(){

        }

        void TestTask_24(){

        }

        void TestTask_25(){

        }

        void TestTask_26(){

        }

        void TestTask_27(){

        }

        void TestTask_28(){

        }

        void TestTask_29(){

        }

        void TestTask_30(){

        }

        void TestTask_31(){

        }

        void TestTask_32(){

        }

        void TestTask_33(){

        }

        void TestTask_34(){

        }

        void TestTask_35(){

        }

        void TestTask_36(){

        }

        void TestTask_37(){

        }

        void TestTask_38(){

        }


        void TestCalculationsFormulas(){
            ch_2::TestTask_1();
            ch_2::TestTask_2();
            ch_2::TestTask_3();
            ch_2::TestTask_4();
            ch_2::TestTask_5();

            ch_2::TestTask_7();
            ch_2::TestTask_8();
            ch_2::TestTask_9();
            ch_2::TestTask_10();
            ch_2::TestTask_11();
            ch_2::TestTask_12();
            ch_2::TestTask_13();
            ch_2::TestTask_14();
            ch_2::TestTask_15();
            ch_2::TestTask_16();
            ch_2::TestTask_17();
            ch_2::TestTask_18();
            ch_2::TestTask_19();
        }
    }

    void Tests(){
        TestRunner runner;
        RUN_TEST(runner, ch_1::TestDisplayingInformationOnScreen);
        RUN_TEST(runner, ch_2::TestCalculationsFormulas);

        std::cout << 2.0/std::sqrt(std::complex<double>(-2.0)) << std::endl;
    }
}