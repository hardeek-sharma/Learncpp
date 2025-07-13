/*
Question #1
    What does the following expression evaluate to? 6 + 5 * 4 % 3
Paranthasized: 6 + ((5 * 4) % 3)
Answer: 8
    

Question #2
    Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. 
    Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise. 
    Use the remainder operator to test whether the integer parameter is even. 
    Make sure isEven() works with both positive and negative numbers.

    Your program should match the following output:
        Enter an integer: 5
        5 is odd
Answer: */

#include <iostream>

constexpr bool isEven(int x);

int main()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    bool result{isEven(num)};
    if (result)
    {
        std::cout << num << " is even\n";
    }
    else
    {
        std::cout << num << " is odd\n";
    }



    return 0;
}

constexpr bool isEven(int x)
{
    if (x < 0)
    {
        x *= -1;
    }
    
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
