#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num{};
    std::cin >> num;

    std::cout << "Double your number is: " << num * 2 << '\n' 
              << "Triple your number is: " << num * 3 << '\n';

    return 0;
}
