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

    std::optional<Cube> CalculateCubeParameters(double edge){
        if(edge < 0){
            return std::optional<Cube>{std::nullopt};
        }
        double side_area = edge*edge, volume = side_area*edge;
        return Cube{volume, side_area};
    }

    std::optional<Circle> CalculateCircleParameters(double radius){
        if(radius < 0){
            return std::optional<Circle>{std::nullopt};
        }
        return Circle{radius, 2*M_PI*radius, M_PI*radius*radius};
    }
}