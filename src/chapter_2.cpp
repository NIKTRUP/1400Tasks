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

    // высота h в километрах
    std::optional<double> CalculateDistanceHorizonLine(double h, double R){
        if(h < 0 || R <= 0){
            return std::optional<double>{std::nullopt};
        }
        return std::sqrt((R+h)*(R+h) - R*R);
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

    std::optional<double> CalculatePerimeterTriangle(double a, double b){
        auto c = CalculateHypotenuse(a, b);
        return c.has_value() ? c.value() + a + b: std::optional<double>{std::nullopt};
    }

    std::optional<double> CalculatePerimeterTrapezoid(double a, double b, double h){
        if(a <= 0 || b <= 0 || h <= 0){
            return std::optional<double>{std::nullopt};
        }

        double d = 0;
        if(a == b){
            return a + b + h*2;
        }else {
            d = std::abs((b - a)/2.0);
        }

        auto c = CalculateHypotenuse(d, h);
        return c.has_value() ? 2*c.value() + a + b : std::optional<double>{std::nullopt};
    }

    std::optional<RectData> CalculateRectData(double a, double b){
        if(a <= 0 || b <= 0){
            return std::optional<RectData>{std::nullopt};
        }
        auto c = CalculateHypotenuse(a, b);
        if(!c.has_value()){
            return std::optional<RectData>{std::nullopt};
        }
        return RectData{2 * a + 2 * b, c.value()};
    }

    std::optional<Parallelepiped> CalculateParallelepipedParameters(double a, double b, double c){
        if(a <= 0 || b <= 0 || c <= 0){
            return std::optional<Parallelepiped>{std::nullopt};
        }
        double side_area = 2*(a*b + b*c+ a*c), volume = a*b*c;
        return Parallelepiped{volume, side_area};
    }

    double CalculateDistance(Point a, Point b){
        double x = b.x - a.x,
        y = b.y - a.y;
        return std::sqrt(x*x + y*y);
    }

    // alpha - в радианах
    std::optional<double> CalculateAreaTrapezoid(double a, double b, double alpha){
        double eps = 1e-16;
        if(a <= 0 || b <= 0 || !( (alpha > 0) && (M_PI_2 - alpha > 0) )){
            return std::optional<double>{std::nullopt};
        }

        double m = std::abs(b*b - a*a);
        return m*std::tan(alpha)/4.0;
    }

    std::optional<TriangleData> CalculateTriangleParameters(Point a, Point b, Point c){

        // проверяю, лежат ли на одной прямой
        if( (c.y-a.y)*(b.x-a.x) == (b.y- a.y)*(c.x-a.x)){
            return std::optional<TriangleData>{std::nullopt};
        }

        double ab = CalculateDistance(a, b),
        ac = CalculateDistance(a, c),
        bc = CalculateDistance(b, c);

        double P = ab + bc + ac, p = P/2;
        return TriangleData{std::sqrt(p*(p-ab)*(p-bc)*(p-ac)) , P};
    }
}