#define null

/*
Question #1
    Write a short program where the user is asked to enter a single character. Print the value of the character and its ASCII code, using static_cast.
    The program’s output should match the following:

        Enter a single character: a
        You entered 'a', which has ASCII code 97.

Answer: */
    #ifdef q1

        #include <iostream>

        int main()
        {
            std::cout << "Enter a single character: ";
            char ch {};
            std::cin >> ch;

            std::cout << "You entered " << ch << " Which has a value of " << static_cast<int>(ch) << ".\n";

            return 0;
        }

    #endif

/*
Question #2
    Modify the program you wrote for quiz #1 to use implicit type conversion instead of static_cast. How many different ways can you think of to do this?
    Note: You should favor explicit conversions over implicit conversions, so don’t actually do this in real programs -- this is just to test your understanding of where implicit conversions can occur.

Answer: */

    #ifdef q2_0

        #include <iostream>

        int main()
        {
            std::cout << "Enter a single character: ";
            char ch {};
            std::cin >> ch;
            int n {ch};

            std::cout << "You entered " << ch << " Which has a value of " << n << ".\n";

            return 0;
        }

    #endif

//BORDER FOR VISUAL

    #ifdef q2_1

    #include <iostream>

    int main()
    {
        // Only works if warning to error is off
        std::cout << "Enter a single character: ";
        int n {};
        std::cin >> n;
        char ch {n};

        std::cout << "You entered " << ch << " Which has a value of " << n << ".\n";

        return 0;
        }

    #endif




#ifdef null

int main()
{
    return 0;
}

#endif
