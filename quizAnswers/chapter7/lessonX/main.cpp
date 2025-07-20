#define q2

/*
Question #1
    Fix the following program:
        #include <iostream>

        int main()
        {
            std::cout << "Enter a positive number: ";
            int num{};
            std::cin >> num;


            if (num < 0)
                std::cout << "Negative number entered.  Making positive.\n";
                num = -num;

            std::cout << "You entered: " << num;

            return 0;
        }
Answer: */


#ifdef q1

#include <iostream>

int main()
{
    std::cout << "Enter a positive number: ";
    int num{};
    std::cin >> num;

    if (num < 0)
    {
        std::cout << "Negative number entered.  Making positive.\n";
        num = -num;
    }
    std::cout << "You entered: " << num << '\n';

        return 0;
}

#endif


/*
Question #2
    Write a file named constants.h that makes the following program run. 
    If your compiler is C++17 capable, use an inline constexpr variable. 
    Otherwise, use a normal constexpr variable. 
    maxClassSize should have value 35.
        main.cpp:

        #include "constants.h"
        #include <iostream>

        int main()
        {
            std::cout << "How many students are in your class? ";
            int students{};
            std::cin >> students;


            if (students > Constants::maxClassSize)
                std::cout << "There are too many students in this class";
            else
                std::cout << "This class isn't too large";

            return 0;
        }
Answer: */

#ifdef q2

#include "constants.h"
#include <iostream>

int main()
{
    std::cout << "How many students are in your class? ";
    int students{};
    std::cin >> students;


    if (students > Constants::maxClassSize)
        std::cout << "There are too many students in this class\n";
    else
        std::cout << "This class isn't too large\n";

    return 0;
}  


#endif




/*
Question #3
    Write a function int accumulate(int x). 
    This function should return the sum of all of the values of x that have been passed to this function.
    The following program should run and produce the output noted in comments:
        #include <iostream>

        int main()
        {
            std::cout << accumulate(4) << '\n'; // prints 4
            std::cout << accumulate(3) << '\n'; // prints 7
            std::cout << accumulate(2) << '\n'; // prints 9
            std::cout << accumulate(1) << '\n'; // prints 10

            return 0;
        }
Answer: */

#ifdef q3

#include <iostream>

int accumulate(int x);

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}

int accumulate(int x)
{
    static int total{};
    total += x;

    return total;
}

#endif
