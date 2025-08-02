/*
Question #6
Write a program that asks the user to input a number between 0 and 255. Print this number as an 8-bit binary number (of the form #### ####). Don’t use any bitwise 
operators. Don’t use std::bitset.

Reminder: std::uint8_t is usually treated as a char, not an int. This may cause unexpected behavior when used with input or output.
*/

#include <iostream>
// #include <bitset>

int main()
{
    std::cout << "Enter a number between 0 and 255: ";
    int num{};
    std::cin >> num;

    std::uint8_t binary{};

    for (int i{ 128 }, place{0}; i >= 1; i /= 2, ++place) 
    {
        if (place % 4 == 0 && place != 0)
        {
            std::cout << ' ';
        }

        if ((num / i) % 2 == 0)
        {
            std::cout << 0;
        }
        else
        {
            std::cout << 1;
        }
    }
    std::cout << '\n';

    return 0;
}
