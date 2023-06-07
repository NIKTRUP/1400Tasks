#include "../include/chapter_2.h"

namespace ch_2{

    double CalculateParabolicEquation(double x, double a, double b, double c){
        return a*x*x + b*x + c;
    }

    std::optional<double> CalculatePerimeterSquare(double side){
        if(side < 0){
            return std::optional<double>{std::nullopt};
        }
        return 4 * side;
    }

    std::optional<double> CalculateDiameterCircle(double radius){
        if(radius < 0){
            return std::optional<double>{std::nullopt};
        }
        return 2 * radius;
    }
}