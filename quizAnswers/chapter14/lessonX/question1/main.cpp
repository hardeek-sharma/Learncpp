/*
Question #1

a) Write a class named Point2d. Point2d should contain two member variables of type double: m_x, and m_y, both defaulted to 0.0.

Provide a constructor and a print() function.

The following program should run:

    #include <iostream>

    int main()
    {
        Point2d first{};
        Point2d second{ 3.0, 4.0 };

        // Point2d third{ 4.0 }; // should error if uncommented

        first.print();
        second.print();

        return 0;
    }

This should print:

    Point2d(0, 0)
    Point2d(3, 4)
*/

#include <iostream>

class Point2d
{
    double m_x{ 0.0 };
    double m_y{ 0.0 };
public:

    Point2d() = default;

    Point2d(double x, double y) 
        : m_x{ x }
        , m_y{ y }
    {
    }

    void print() const
    {
        std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
    }
};

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.print();
    second.print();

    return 0;
}

/*
b) Now add a member function named distanceTo() that takes another Point2d as a parameter, and calculates the distance between them.
Given two points (x1, y1) and (x2, y2), the distance between them can be calculated using the formula 
std::sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)). The std::sqrt function lives in header cmath.

The following program should run:

    #include <cmath>
    #include <iostream>

    int main()
    {
        Point2d first{};
        Point2d second{ 3.0, 4.0 };

        first.print();
        second.print();

        std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

        return 0;
    }

This should print:

    Point2d(0, 0)
    Point2d(3, 4)
    Distance between two points: 5
*/

#include <cmath>
#include <iostream>

class Point2d
{
    double m_x{ 0.0 };
    double m_y{ 0.0 };
public:

    Point2d() = default;

    Point2d(double x, double y) 
        : m_x{ x }
        , m_y{ y }
    {
    }

    void print() const
    {
        std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
    }

    double distanceTo(const Point2d& two) const
    {
        return std::sqrt((m_x - two.m_x)*(m_x - two.m_x) + (m_y - two.m_y)*(m_y - two.m_y));
    }
};

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}
