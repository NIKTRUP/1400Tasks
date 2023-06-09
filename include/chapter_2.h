#ifndef INC_1400PROGRAMMINGTASKS_CHAPTER_2_H
#define INC_1400PROGRAMMINGTASKS_CHAPTER_2_H

#include <optional>
#include <complex>

namespace ch_2{

    struct Cube {
        double volume = 0,
        side_area = 0;
    };

    struct Circle {
        double radius = 0,
        lenght = 0,
        area = 0;
    };

    double CalculateParabolicEquation(double x, double a, double b, double c);

    std::optional<double> CalculatePerimeterSquare(double side);

    std::optional<double> CalculateDiameterCircle(double radius);

    std::optional<Cube> CalculateCubeParameters(double edge);

    std::optional<Circle> CalculateCircleParameters(double radius);

}

#endif //INC_1400PROGRAMMINGTASKS_CHAPTER_2_H
