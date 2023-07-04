#include "../include/tests.h"

namespace tests {

    namespace ch_1{
        void TestTask_1(){
            std::stringstream ss;
            ::ch_1::Print_31_18_79(ss);
            std::stringstream ss_test;
            ss_test << 31 << " " << 18 << " " << 79;
            ASSERT(ss.str() == ss_test.str())
        }

        void TestTask_2(){
            std::stringstream ss;
            ::ch_1::Print_47__52__150(ss);
            std::stringstream ss_test;
            ss_test << 47 << "  " << 52 << "  " << 150;
            ASSERT(ss.str() == ss_test.str())
        }

        void TestTask_3(){
            std::stringstream ss;
            ::ch_1::Print_50n10(ss);
            std::stringstream ss_test;
            ss_test << 50 << '\n'
                    << 10;
            ASSERT(ss.str() == ss_test.str())
        }

        void TestTask_4(){
            std::stringstream ss;
            ::ch_1::Print_5n10n21(ss);
            std::stringstream ss_test;
            ss_test << 5 << '\n'
                    << 10 << '\n'
                    << 21;
            ASSERT(ss.str() == ss_test.str())
        }

        void TestTask_5(){
            std::stringstream ss;
            ::ch_1::Print_1n2(ss);
            std::stringstream ss_test;
            ss_test << 1 << '\n'
                    << 2;
            ASSERT(ss.str() == ss_test.str())
        }

        void TestTask_6(){
            int precision = 4;
            std::stringstream ss;
            ::ch_1::PrintPi(precision,ss);
            std::stringstream ss_test;
            ss_test << 3.142;
            ASSERT(ss.str() == ss_test.str())
        }

        void TestTask_7(){
            int precision = 2;
            std::stringstream ss;
            ::ch_1::PrintExp(precision,ss);
            std::stringstream ss_test;
            ss_test << 2.7;
            ASSERT(ss.str() == ss_test.str())
        }

        void TestTask_8(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::EnterNumberAndPrint1(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "Вы ввели число 10";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::EnterNumberAndPrint1(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }
        }

        void TestTask_9(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::EnterNumberAndPrint2(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 - вот какое число Вы ввели";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::EnterNumberAndPrint2(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }
        }

        void TestTask_10(){
            std::string name = "Leha" ;
            std::stringstream ss_out;
            ::ch_1::RepeatName(name, ss_out);
            std::stringstream ss_test;
            ss_test << "Leha Leha";
            ASSERT(ss_out.str() == ss_test.str())
        }

        void TestTask_11(){
            std::string name = "Leha" ;
            std::stringstream ss_out;
            ::ch_1::RepeatNameChampion(name, ss_out);
            std::stringstream ss_test;
            ss_test << "Leha Leha - это чемпион!";
            ASSERT(ss_out.str() == ss_test.str())
        }

        void TestTask_12(){
            std::string name = "Leha" ;
            std::stringstream ss_out;
            ::ch_1::Hi(name, ss_out);
            std::stringstream ss_test;
            ss_test << "Привет, Leha!";
            ASSERT(ss_out.str() == ss_test.str())
        }

        void TestTask_13(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::PrintCurrentPrevNextNumber(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "Следующее за числом 10 число - 11." << '\n'
                        << "Для числа 10 предыдущее число - 9." << '\n';
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::PrintCurrentPrevNextNumber(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
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
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 11 << 12 ;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << "    " << 11 << "  " << 124;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10  11  124";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12 << " " << 155;
                ::ch_1::PrintThreeNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10  11  12";
                ASSERT(ss_out.str() == ss_test.str())
            }
        }

        void TestTask_15(){
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12 << " " << 15;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 11 12 15";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << "asdsfas aef";
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12 ;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 11 << 12  << 15;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 11 << " " << 12 << " " << 15 << "  " << 125;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 11 12 15";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << "   " << 11 << "     " << 12 << "   " << 15;
                ::ch_1::PrintFourNumbers(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 11 12 15";
                ASSERT(ss_out.str() == ss_test.str())
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
                ASSERT(ss_out.str() == ss_test.str())
            }
            // б)
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 15;
                ::ch_1::Print16VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "100 10\n";
                ss_test << "1949 15\n";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::Print16VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 15;
                ::ch_1::Print16VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }
            // в)
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 15;
                ::ch_1::Print16VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 25\n";
                ss_test << "10 15\n";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::Print16VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 15;
                ::ch_1::Print16VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
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
                ASSERT(ss_out.str() == ss_test.str())
            }
            // б)
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 15;
                ::ch_1::Print17VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 1\n";
                ss_test << "19 15\n";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::Print17VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 15;
                ::ch_1::Print17VarB(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }
            // в)
            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << " " << 15;
                ::ch_1::Print17VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << "10 15\n";
                ss_test << "5 15\n";
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10;
                ::ch_1::Print17VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
            }

            {
                std::stringstream ss_out, ss_in;
                ss_in << 10 << 15;
                ::ch_1::Print17VarC(ss_in, ss_out);
                std::stringstream ss_test;
                ss_test << ::ch_1::input_error_message;
                ASSERT(ss_out.str() == ss_test.str())
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

            ASSERT(std::abs(10 - function_task_2(0)) < eps)
            ASSERT(std::abs(7.77817459305 - function_task_2(1)) < eps)
            ASSERT(std::abs(7.77817459305 - function_task_2(-1)) < eps)
            ASSERT(std::abs(10000.00095 - function_task_2(10000)) < 1e-5)
        }

        void TestTask_3(){
            double eps = 1e-10;
            {
                auto function_task_3a = [](double a){
                    return (std::sqrt(std::complex<double>((2*a + std::sin(std::abs(3*a)))/3.56)));
                };

                ASSERT(std::abs(function_task_3a(0).real()) < eps)
                ASSERT(std::abs(0.775524470608 - function_task_3a(1).real()) < eps)
                ASSERT(std::abs(2.3109393231 - function_task_3a(10).real()) < eps)
                ASSERT(std::abs(0.192586684092 - function_task_3a(-0.4).real()) < eps)
                ASSERT(std::abs(0.0265265046378 - function_task_3a(-0.5).imag()) < eps)
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
                ASSERT(function_task_3b(0).has_value() == false)
                ASSERT(function_task_3b(1).has_value() && std::abs(0.797320575602 - function_task_3b(1).value().real()) < eps)
                ASSERT(function_task_3b(10).has_value() && std::abs(0.12996382562 - function_task_3b(10).value().real()) < eps)
                ASSERT(function_task_3b(-1).has_value() && std::abs(0.597195441362 - function_task_3b(-1).value().real()) < eps)
                ASSERT(function_task_3b(-2).has_value() && std::abs(0.31614070455 - function_task_3b(-2).value().real()) < eps)
                ASSERT(function_task_3b(-2).has_value() && std::abs(0.095081826833 - function_task_3b(-2).value().imag()) < eps)
            }
        }

        void TestTask_4(){
            ASSERT(::ch_2::CalculatePerimeterSquare(10) == 40)
            ASSERT(::ch_2::CalculatePerimeterSquare(-10).has_value() == false)
            ASSERT(::ch_2::CalculatePerimeterSquare(0) == 0)
            ASSERT(::ch_2::CalculatePerimeterSquare(1) == 4)
        }

        void TestTask_5(){
            ASSERT(::ch_2::CalculateDiameterCircle(10) == 20)
            ASSERT(::ch_2::CalculateDiameterCircle(-10).has_value() == false)
            ASSERT(::ch_2::CalculateDiameterCircle(0) == 0)
            ASSERT(::ch_2::CalculateDiameterCircle(1) == 2)
        }

        void TestTask_6(){
            double eps = 1e-5;
            ASSERT(::ch_2::CalculateDistanceHorizonLine(-1).has_value() == false)
            ASSERT(::ch_2::CalculateDistanceHorizonLine(-10).has_value() == false)
            ASSERT(::ch_2::CalculateDistanceHorizonLine(1, -10).has_value() == false)
            ASSERT(::ch_2::CalculateDistanceHorizonLine(1, 0).has_value() == false)
            ASSERT(std::abs(::ch_2::CalculateDistanceHorizonLine(0).value()) < eps)
            ASSERT(std::abs(112.698713391 - ::ch_2::CalculateDistanceHorizonLine(1).value()) < eps)
            ASSERT(std::abs(356.5108694 - ::ch_2::CalculateDistanceHorizonLine(10).value()) < eps)
            ASSERT(std::abs(35.6371996655 - ::ch_2::CalculateDistanceHorizonLine(0.1).value()) < eps)
            ASSERT(std::abs(4.78121357398 - ::ch_2::CalculateDistanceHorizonLine(0.0018).value()) < eps)
        }

        void TestTask_7(){
            auto cube = ::ch_2::CalculateCubeParameters(3);
            ASSERT(cube->side_area == 9 && cube->volume == 27)
            cube = ::ch_2::CalculateCubeParameters(-10);
            ASSERT(cube.has_value() == false)
            cube = ::ch_2::CalculateCubeParameters(0);
            ASSERT(cube->side_area == 0 && cube->volume == 0)
            cube = ::ch_2::CalculateCubeParameters(1);
            ASSERT(cube->side_area == 1 && cube->volume == 1)
            cube = ::ch_2::CalculateCubeParameters(10);
            ASSERT(cube->side_area == 100 && cube->volume == 1000)
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
            ASSERT(test(radius_t1, circle))
            circle = ::ch_2::CalculateCircleParameters(radius_t2);
            ASSERT(circle.has_value() == false)
            circle = ::ch_2::CalculateCircleParameters(radius_t3);
            ASSERT(test(radius_t3, circle))
            circle = ::ch_2::CalculateCircleParameters(radius_t4);
            ASSERT(test(radius_t4, circle))
            circle = ::ch_2::CalculateCircleParameters(radius_t5);
            ASSERT(test(radius_t5, circle))
        }

        void TestTask_9(){
            double eps = 1e-10;
            {
                auto function_9a = [](double x, double y){
                    return 2*x*x*x - 3.44*x*y + 2.3*x*x - 7.1*y;
                };
                ASSERT(std::abs(function_9a(0, 0)) < eps)
                ASSERT(std::abs(3.96 - function_9a(-1, -1)) < eps)
                ASSERT(std::abs(-6.24 - function_9a(1, 1)) < eps)
            }

            {
                auto function_9b = [](double a, double b){
                    double c = (a+b);
                    return 3.14*c*c*c + 2.75*b*b - 12.7*a - 4.1;
                };
                ASSERT(std::abs(-4.1 - function_9b(0, 0)) < eps)
                ASSERT(std::abs(-13.77 - function_9b(-1, -1)) < eps)
                ASSERT(std::abs(11.07 - function_9b(1, 1)) < eps)
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
                ASSERT(std::abs(3.07335008386 - z(1, 1).value()) < eps)
                ASSERT(z(0, 1).has_value() == false)
            }

            auto q = [](double x, double y){
                return 7.25*sin(x) - std::abs(y);
            };

            {
                ASSERT(std::abs(6.10066463986 - q(1, 0)) < eps)
                ASSERT(std::abs(5.10066463986 - q(1, 1)) < eps)
                ASSERT(std::abs(q(0, 0)) < eps)
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
            double eps = 1e-8;
            auto a = [](double e, double f, double g){
                if(f == 0){
                    return std::optional<std::complex<double>>{std::nullopt};
                }
                double c = std::abs(e - 3.0/f);
                return std::optional<std::complex<double>>{std::sqrt(std::complex<double>{c*c*c + g})};
            };

            ASSERT(a(1, 0.0, 1).has_value() == false)
            ASSERT(std::abs(2.0 - a(1, 3.0, 4).value().real()) < eps)
            ASSERT(std::abs(2.0 - a(4.0, 1.0, 3.0).value().real()) < eps)
            ASSERT(std::abs(28.256912871 - a(10.0, 4.0, 7.0).value().real()) < eps)

            auto b = [](double e, double h){
                double cos_h = std::cos(h);
                return std::sin(e) + cos_h*cos_h;
            };

            ASSERT(std::abs(1.0 - b(0.0, 0.0)) < eps)
            ASSERT(std::abs(0.173178189568 - b(0.0, 2.0)) < eps)

            auto c = [](double e, double f, double g){
                double denominator =  e*f- 3;
                if(denominator == 0){
                    return std::optional<double>{std::nullopt};
                }
                return std::optional<double>{(33*g)/denominator};
            };

            ASSERT(c(1.0, 3.0, 4.0).has_value() == false)
            ASSERT(c(3.0, 1.0, 4.0).has_value() == false)
            ASSERT(std::abs(1.0 - c(1.0, 36.0, 1.0).value()) < eps)
            ASSERT(std::abs(15.4972375691 - c(3.3, 4.2, 5.1).value()) < eps)
        }

        void TestTask_21(){
            double eps = 1e-10;

            auto a = [](double e, double f){
                return (e + f/2.0)/3.0;
            };

            ASSERT(std::abs(1.0 - a(2.0, 2.0)) < eps)
            ASSERT(std::abs(1.0 - a(2.0, 2.0)) < eps)
            ASSERT(std::abs(1.8 - a(3.3, 4.2)) < eps)

            auto b = [](double h, double g){
                return std::abs(h*h - g);
            };

            ASSERT(std::abs(b(1.0, 1.0)) < eps)
            ASSERT(std::abs(3.0 - b(2.0, 1.0)) < eps)
            ASSERT(std::abs(12.0 - b(-3.0, -3.0)) < eps)

            auto c = [](double e, double h, double g){
                double c = g - h;
                return std::sqrt(std::complex<double>{(c*c - 3.0*std::sin(e))});
            };

            ASSERT(std::abs(c(0.0, 1.0, 1.0)) < eps)
            ASSERT(std::abs(0.759368142485 - c(3.0, 1.0, 2.0).real()) < eps)
            ASSERT(std::abs(0.650661220744 - c(3.0,-0.0, 0.0).imag()) < eps)
        }

        void TestTask_22(){
            double eps = 1e-16;
            auto average = [](int lhs, int rhs){
                return (static_cast<double>(std::abs(lhs) + std::abs(rhs))) / 2.0;
            };

            ASSERT(std::abs(average(0, 0))< eps)
            ASSERT(std::abs(0.5 - average(1, 0))< eps)
            ASSERT(std::abs(4.0 - average(4, 4))< eps)
            ASSERT(std::abs(55 - average(10, 100))< eps)
            ASSERT(std::abs(55 - average(-100, -10))< eps)

            auto geometric_avg = [](int lhs, int rhs){
                return std::sqrt(std::abs(lhs)*std::abs(rhs));
            };

            ASSERT(std::abs(geometric_avg(0, 0))< eps)
            ASSERT(std::abs(geometric_avg(1, 0))< eps)
            ASSERT(std::abs(4.0 - geometric_avg(4, 4))< eps)
            ASSERT(std::abs(100 - geometric_avg(10, 1000))< eps)
            ASSERT(std::abs(100 - geometric_avg(-1000, -10))< eps)
            ASSERT(std::abs(4.47213595499958 - geometric_avg(4, 5))< eps)
        }

        void TestTask_23(){
            double eps = 1e-10;

            auto test = [eps](double perimeter, double diag, std::optional<::ch_2::RectData> rect){
                return (std::abs(perimeter - rect->perimeter) < eps &&
                        std::abs(diag - rect->diag) < eps);
            };


            ASSERT(::ch_2::CalculateRectData(3, -1).has_value() == false)
            ASSERT(::ch_2::CalculateRectData(-1, 3).has_value() == false)
            ASSERT(::ch_2::CalculateRectData(3, 0).has_value() == false)
            ASSERT(::ch_2::CalculateRectData(0, 3).has_value() == false)
            ASSERT(test(14.0, 5, ::ch_2::CalculateRectData(3, 4)))
            ASSERT(test(14.0, 5, ::ch_2::CalculateRectData(4, 3)))
            ASSERT(test(50, 18.0277563773, ::ch_2::CalculateRectData(15, 10)))
        }

        void TestTask_24(){
            double eps = 1e-10;

            auto sum = [](double l, double r){
                return l + r;
            };

            ASSERT(std::abs(2 - sum(2, 0)) < eps)
            ASSERT(std::abs(2 - sum(0, 2)) < eps)
            ASSERT(std::abs(4 - sum(2, 2)) < eps)
            ASSERT(std::abs(sum(2, -2)) < eps)
            ASSERT(std::abs(sum(-2, 2)) < eps)
            ASSERT(std::abs(6 - sum(2, 4)) < eps)
            ASSERT(std::abs(6 - sum(4, 2)) < eps)

            auto sub = [](double l, double r){
                return l - r;
            };

            ASSERT(std::abs(2 - sub(2, 0)) < eps)
            ASSERT(std::abs(-2 - sub(0, 2)) < eps)
            ASSERT(std::abs(sub(2, 2)) < eps)
            ASSERT(std::abs(4 - sub(2, -2)) < eps)
            ASSERT(std::abs(-4 - sub(-2, 2)) < eps)
            ASSERT(std::abs(-2 - sub(2, 4)) < eps)
            ASSERT(std::abs(2 - sub(4, 2)) < eps)

            auto mul = [](double l, double r){
                return l * r;
            };

            ASSERT(std::abs(4 - mul(2, 2)) < eps)
            ASSERT(std::abs(-4 - mul(2, -2)) < eps)
            ASSERT(std::abs(-4 - mul(-2, 2)) < eps)
            ASSERT(std::abs(8 - mul(2, 4)) < eps)
            ASSERT(std::abs(8 - mul(4, 2)) < eps)
            ASSERT(std::abs(mul(10, 0)) < eps)
            ASSERT(std::abs(mul(0, 10)) < eps)

            auto div = [](double l, double r){
                if (r == 0){
                    return std::optional<double>{std::nullopt};
                }
                return std::optional<double>{l/r};
            };

            ASSERT(std::abs(1 - div(2, 2).value()) < eps)
            ASSERT(std::abs(-1 - div(2, -2).value()) < eps)
            ASSERT(std::abs(-1 - div(-2, 2).value()) < eps)
            ASSERT(std::abs(0.5 - div(2, 4).value()) < eps)
            ASSERT(std::abs(2 - div(4, 2).value()) < eps)
            ASSERT(div(10, 0).has_value() == false)
            ASSERT(std::abs(div(0, 10).value()) < eps)
        }

        void TestTask_25(){
            auto parallelepiped = ::ch_2::CalculateParallelepipedParameters(3, 3, 3);
            ASSERT(parallelepiped->side_area == 54 && parallelepiped->volume == 27)
            parallelepiped = ::ch_2::CalculateParallelepipedParameters(-1, 2, 3);
            ASSERT(parallelepiped.has_value() == false)
            parallelepiped = ::ch_2::CalculateParallelepipedParameters(1, -2, 3);
            ASSERT(parallelepiped.has_value() == false)
            parallelepiped = ::ch_2::CalculateParallelepipedParameters(1, 2, -3);
            ASSERT(parallelepiped.has_value() == false)
            parallelepiped = ::ch_2::CalculateParallelepipedParameters(0, 2, 3);
            ASSERT(parallelepiped.has_value() == false)
            parallelepiped = ::ch_2::CalculateParallelepipedParameters(1, 0, 3);
            ASSERT(parallelepiped.has_value() == false)
            parallelepiped = ::ch_2::CalculateParallelepipedParameters(1, 2, 0);
            ASSERT(parallelepiped.has_value() == false)
            parallelepiped = ::ch_2::CalculateParallelepipedParameters(1, 2, 3);
            ASSERT(parallelepiped->side_area == 22 && parallelepiped->volume == 6)
            parallelepiped = ::ch_2::CalculateParallelepipedParameters(10, 4, 6);
            ASSERT(parallelepiped->side_area == 248 && parallelepiped->volume == 240)
        }

        void TestTask_26(){
            double eps = 1e-16;
            ASSERT(std::abs(3 - ::ch_2::CalculateDistance({0, 0}, {0, 3})) < eps)
            ASSERT(std::abs(3 - ::ch_2::CalculateDistance({0, 3}, {0, 0})) < eps)
            ASSERT(std::abs(::ch_2::CalculateDistance({0,0}, {0, 0})) < eps)
            ASSERT(std::abs(3.605551275463989 - ::ch_2::CalculateDistance({0,0}, {2, 3})) < eps)
            ASSERT(std::abs(22.47220505424423 - ::ch_2::CalculateDistance({10,16}, {18, -5})) < eps)
        }

        void TestTask_27(){
            TestTask_17(); // Условие 27-го такое же, как и в 17-ом задании
        }

        void TestTask_28(){
            double eps = 1e-8;
            ASSERT(std::abs(6.22963089862 - ::ch_2::CalculateAreaTrapezoid(5, 3, 1.0).value()) < eps)
            ASSERT(::ch_2::CalculateAreaTrapezoid(-1, 3, 1).has_value() == false)
            ASSERT(::ch_2::CalculateAreaTrapezoid(3, -1, 1).has_value() == false)
            ASSERT(::ch_2::CalculateAreaTrapezoid(0, 3, 1).has_value() == false)
            ASSERT(::ch_2::CalculateAreaTrapezoid(3, 0, 1).has_value() == false)
            ASSERT(::ch_2::CalculateAreaTrapezoid(3, 3, 3).has_value() == false)
            ASSERT(std::abs(::ch_2::CalculateAreaTrapezoid(3, 3, 1).value()) < eps)
            ASSERT(std::abs(39.866577693 - ::ch_2::CalculateAreaTrapezoid(5, 3, 1.47079632679).value()) < eps)
            ASSERT(std::abs(39.866577693 - ::ch_2::CalculateAreaTrapezoid(3, 5, 1.47079632679).value()) < eps)
            ASSERT(std::abs(3.80081316579 - ::ch_2::CalculateAreaTrapezoid(10, 5, 0.2).value()) < eps)
        }

        void TestTask_29(){
            double eps = 1e-8;

            auto triangle_data = ::ch_2::CalculateTriangleParameters({1, 1}, {1, 1}, {1, 1});
            ASSERT(triangle_data.has_value() == false)

            triangle_data = ::ch_2::CalculateTriangleParameters({1, 1}, {1, 2}, {1, 3});
            ASSERT(triangle_data.has_value() == false)

            triangle_data = ::ch_2::CalculateTriangleParameters({1, 1}, {2, 1}, {3, 1});
            ASSERT(triangle_data.has_value() == false)

            triangle_data = ::ch_2::CalculateTriangleParameters({1, 1}, {2, 2}, {3, 3});
            ASSERT(triangle_data.has_value() == false)

            triangle_data = ::ch_2::CalculateTriangleParameters({0, 0}, {10, 5}, {7, 8});
            ASSERT(std::abs(26.0531263874 - triangle_data.value().perimeter) < eps)
            ASSERT(std::abs(22.5 - triangle_data.value().area) < eps)
        }

        void TestTask_30(){

        }

        void TestTask_31(){
            double eps = 1e-8;

            auto round_up = [](double value, int decimal_places) {
                const double multiplier = std::pow(10.0, decimal_places);
                return std::ceil(value * multiplier) / multiplier;
            };

            // цена за киллограмм
            double price_sweets = 100,
            price_apples = 200,
            price_cookies = 150;

            auto calculate_receipt = [price_sweets, price_apples, price_cookies, &round_up](double sweets_kg, double apples_kg, double cookies_kg){
                return sweets_kg >= 0 && apples_kg >= 0 && cookies_kg >= 0 ?
                std::optional<double>{round_up(price_sweets*sweets_kg + price_apples*apples_kg + price_cookies*cookies_kg, 2)}
                : std::optional<double>{std::nullopt};
            };

            ASSERT(calculate_receipt(-1, 2, 3).has_value() == false)
            ASSERT(calculate_receipt(1, -2, 3).has_value() == false)
            ASSERT(calculate_receipt(1, 2, -3).has_value() == false)
            ASSERT(std::abs(1000 - calculate_receipt(0, 2, 4).value()) < eps)

        }

        void TestTask_32(){
            double eps = 1e-16;
            double price_screen = 100,
                price_system_unit = 200,
                price_mouse = 5,
                price_keyboard = 10;
            auto build_computers = [price_screen, price_system_unit, price_mouse, price_keyboard](double amount){
                return amount*(price_screen + price_system_unit + price_mouse + price_keyboard);
            };
            ASSERT(std::abs(945 - build_computers(3)) < eps)
        }

        void TestTask_33(){
            double eps = 1e-16;
            struct Info{
                double avg = 0,
                    diff_from_avg_tanya = 0,
                    diff_from_avg_mitya = 0;
            };

            auto calculate_avg_diff_from_avg = [](size_t age_tanya, size_t age_mitya){
                double avg = static_cast<double>(age_tanya + age_mitya)/2.0;
                return Info{avg, std::abs(avg - static_cast<double>(age_tanya)), std::abs(avg - static_cast<double>(age_mitya))};
            };

            auto info = calculate_avg_diff_from_avg(10, 15);
            ASSERT(std::abs(info.avg - 12.5) < eps)
            ASSERT(std::abs(info.diff_from_avg_tanya - 2.5) < eps)
            ASSERT(std::abs(info.diff_from_avg_mitya - 2.5) < eps)
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
            ch_2::TestTask_6();
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
            ch_2::TestTask_20();
            ch_2::TestTask_21();
            ch_2::TestTask_22();
            ch_2::TestTask_23();
            ch_2::TestTask_24();
            ch_2::TestTask_25();
            ch_2::TestTask_26();
            ch_2::TestTask_27();
            ch_2::TestTask_28();
            ch_2::TestTask_29();

            ch_2::TestTask_31();
            ch_2::TestTask_32();
            ch_2::TestTask_33();
        }
    }

    void Tests(){
        TestRunner runner;
        RUN_TEST(runner, ch_1::TestDisplayingInformationOnScreen);
        RUN_TEST(runner, ch_2::TestCalculationsFormulas);
    }
}