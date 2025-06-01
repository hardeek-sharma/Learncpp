#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter an Integer: ";
    int num{};
    std::cin >> num;

    return num;
}

void writeAnswer(int answer)
{
    std::cout << "Those two numbers added is: " << answer << '\n';
}
