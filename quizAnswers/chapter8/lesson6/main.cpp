/*
Question #1

Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations: +, -, *, /, or % (remainder). Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. If an invalid operator is passed into the function, the function should print an error message. For the division operator, do an integer division, and don’t worry about divide by zero.

Hint: “operator” is a keyword, variables can’t be named “operator”.

Answer: */

#include <iostream>

int calculate(int x, char sign, int y);

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char sign{};
    std::cin >> sign;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    int result{ calculate(x, sign, y) };
    std::cout << x << ' ' << sign << ' ' << y << " = " << result << '\n';

    return 0;
}

int calculate(int x, char sign, int y)
{
    switch(sign)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "Invalid operator inputted\n";
        return 0;
    }
}
