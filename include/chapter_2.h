#ifndef INC_1400PROGRAMMINGTASKS_CHAPTER_2_H
#define INC_1400PROGRAMMINGTASKS_CHAPTER_2_H

#include <optional>
#include <complex>

namespace ch_2{

    struct Cube {
        double volume = 0,
        side_area = 0;
    };

    struct Parallelepiped{
        double volume = 0,
        side_area = 0;
    };

    struct Circle {
        double radius = 0,
        lenght = 0,
        area = 0;
    };

    struct RectData {
        double perimeter = 0,
        diag = 0;
    };

    struct Point {
        double x = 0, y = 0;
    };

    struct TriangleData{
        double area = 0,
        perimeter = 0;
    };

    double CalculateParabolicEquation(double x, double a, double b, double c);

    std::optional<double> CalculatePerimeterSquare(double side);

    std::optional<double> CalculateDiameterCircle(double radius);

    // высота h в километрах
    std::optional<double> CalculateDistanceHorizonLine(double h, double R = 6350);

    std::optional<Cube> CalculateCubeParameters(double edge);

    std::optional<Circle> CalculateCircleParameters(double radius);

    std::optional<double> CalculateDensity(double weight, double volume);

    std::optional<double> CalculatePopulationDensity(double people_amount, double area);

    std::optional<double> SolveLinearEquation(double a, double b);

    std::optional<double> CalculateHypotenuse(double a, double b);

    std::optional<double> CalculateAreaRing(double radius_out, double radius_in);

    std::optional<double> CalculatePerimeterTriangle(double a, double b);

    std::optional<double> CalculatePerimeterTrapezoid(double a, double b, double h);

    std::optional<RectData> CalculateRectData(double a, double b);

    std::optional<Parallelepiped> CalculateParallelepipedParameters(double a, double b, double c);

    double CalculateDistance(Point a, Point b);

    // alpha - в радианах
    std::optional<double> CalculateAreaTrapezoid(double a, double b, double alpha);

    std::optional<TriangleData> CalculateTriangleParameters(Point a, Point b, Point c);

}

#endif //INC_1400PROGRAMMINGTASKS_CHAPTER_2_H
