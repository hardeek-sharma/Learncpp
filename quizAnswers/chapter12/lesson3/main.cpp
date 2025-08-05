/*
Question #1

Determine what values the following program prints by yourself (do not compile the program).

    #include <iostream>

    int main()
    {
        int x{ 1 };
        int& ref{ x };

        std::cout << x << ref << '\n';

        int y{ 2 };
        ref = y;
        y = 3;

        std::cout << x << ref << '\n';

        x = 4;

        std::cout << x << ref << '\n';

        return 0;
    }
*/

// 11
// 22
// 44
