#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    std::cout << "enter an integer: ";
    int num {};
    std::cin >> num;

    std::cout << "double that number is: " << doubleNumber(num) << '\n';

    return 0;
}
