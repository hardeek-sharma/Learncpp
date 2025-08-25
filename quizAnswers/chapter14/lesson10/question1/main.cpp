/*
Question #1

Write a class named Ball. Ball should have two private member variables, one to hold a color, and one to hold a radius. Also write a function to print out the color and radius of the ball.

The following sample program should compile:

    int main()
    {
        Ball blue { "blue", 10.0 };
        print(blue);

        Ball red { "red", 12.0 };
        print(red);

        return 0;
    }

and produce the result:

    Ball(blue, 10)
    Ball(red, 12)
*/

#include <iostream>

class Ball
{
    std::string m_color{};
    double m_radius{};
public:
    Ball(std::string color, double radius)
        : m_color{ color }
        , m_radius{ radius }
    {}
    const std::string& getColor() const {return m_color;}
    double getRadius() const {return m_radius;}
};

void print(Ball& ball)
{
    std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";
}

int main()
{
	Ball blue { "blue", 10.0 };
	print(blue);

	Ball red { "red", 12.0 };
	print(red);

	return 0;
}
