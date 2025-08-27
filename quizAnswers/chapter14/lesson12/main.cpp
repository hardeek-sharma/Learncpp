/*
Question #1

Write a class named Ball. Ball should have two private member variables, one to hold a color (default value: black), and one to hold a radius (default value: 10.0). Add 4 constructors, one to handle each case below:

    int main()
    {
        Ball def{};
        Ball blue{ "blue" };
        Ball twenty{ 20.0 };
        Ball blueTwenty{ "blue", 20.0 };

        return 0;
    }

The program should produce the following result:

    Ball(black, 10)
    Ball(blue, 10)
    Ball(black, 20)
    Ball(blue, 20)

*/

#include <iostream>

class Ball
{
    std::string m_color{"black"};
    double m_radius{10.0};

public:
    Ball()
    {
        print();
    }

    Ball(const std::string& color)
        : m_color{ color }
    {
        print();
    }

    Ball(double radius)
        : m_radius{ radius }
    {
        print();
    }

    Ball(const std::string& color, double radius)
        : m_color{ color }
        , m_radius{ radius }
    {
        print();
    }

    void print()
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    }
};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}

/*
Question #2

Reduce the number of constructors in the above program by using default arguments and delegating constructors.
*/

#include <iostream>

class Ball
{
    std::string m_color{"black"};
    double m_radius{10.0};

public:
    Ball(double radius)
        : Ball{"black", radius}
    {
    }

    Ball(const std::string& color="black", double radius=10.0)
        : m_color{ color }
        , m_radius{ radius }
    {
        print();
    }

    void print()
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    }
};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}
