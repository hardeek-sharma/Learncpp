/*
Question #3

What is the output of this program and why?

    #include <iostream>

    template <typename T>
    int count(T) // This is the same as int count(T x), except we're not giving the parameter a name since we don't use the parameter
    {
        static int c { 0 };
        return ++c;
    }

    int main()
    {
        std::cout << count(1) << '\n';
        std::cout << count(1) << '\n';
        std::cout << count(2.3) << '\n';
        std::cout << count<double>(1) << '\n';

        return 0;
    }

// 1, 2, 1, 2
when count(1) is called it return 1.
when count(1) is called again it return 2.
when count(2.3) is called it uses the template to create a new function with double parameters so it returns 1.
then when count<double>(1) is called it reuses the double function instead of the int function so it return 2.
*/

