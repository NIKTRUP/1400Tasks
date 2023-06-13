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

    std::optional<double> CalculateDensity(double weight, double volume){
        if(weight < 0 || volume <= 0){
            return std::optional<double>{std::nullopt};
        }
        return weight/volume;
    }

    std::optional<double> CalculatePopulationDensity(double people_amount, double area){
        if(people_amount < 0 || area <= 0){
            return std::optional<double>{std::nullopt};
        }
        return people_amount/area;
    }

    std::optional<double> SolveLinearEquation(double a, double b){
        if(a == 0){
            return std::optional<double>{std::nullopt};
        }
        return -b/a;
    }

    std::optional<double> CalculateHypotenuse(double a, double b){
        if(a <= 0 || b <= 0){
            return std::optional<double>{std::nullopt};
        }
        return std::sqrt(a*a + b*b);
    }

    // Внешний радиус кольца больше внутреннего, оба - положительные числа
    std::optional<double> CalculateAreaRing(double radius_out, double radius_in){
        if(radius_out <= 0 || radius_in <= 0 || radius_out <= radius_in){
            return std::optional<double>{std::nullopt};
        }
        return M_PI*(radius_out*radius_out - radius_in*radius_in);
    }
}