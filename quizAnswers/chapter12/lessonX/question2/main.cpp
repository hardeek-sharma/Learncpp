/*
Question #2

What is the output of this program?

    #include <iostream>

    int main()
    {
        int x{ 4 };
        int y{ 6 };

        int& ref{ x };
        ++ref;
        ref = y;
        ++ref;

        std::cout << x << ' ' << y;

        return 0;
    }
*/

// 7 6
