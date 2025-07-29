/*
Question #2 || Two Parts

2a) Update the following program to use type aliases for degrees and radians values:

        #include <iostream>

        namespace constants
        {
            constexpr double pi { 3.14159 };
        }

        double convertToRadians(double degrees)
        {
            return degrees * constants::pi / 180;
        }

        int main()
        {
            std::cout << "Enter a number of degrees: ";
            double degrees{};
            std::cin >> degrees;

            double radians { convertToRadians(degrees) };
            std::cout << degrees << " degrees is " << radians << " radians.\n";

            return 0;
        }
*/

#include <iostream>

namespace constants
{
    constexpr double pi{ 3.14159 };
}

using Degrees = double;
using Radians = double;

Radians convertToRadians(Degrees degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    Degrees degrees{};
    std::cin >> degrees;

    Radians radians{ convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}

/*
2b) Given the definitions for degrees and radians in the previous quiz solution, explain why the following statement will or won’t compile:

radians = degrees;
*/

// It will compile because they are both variables of the same type.
