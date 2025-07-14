/*
Question #1
    Evaluate the following expressions.
Note: in the following answers, we “explain our work” by showing you the steps taken to get to the final answer. 
The steps are separated by a => symbol. Expressions that were ignored due to the short circuit rules are placed in square brackets. 
    For example:
        (1 < 2 || 3 != 3) =>
        (true || [3 != 3]) =>
        (true) =>
        true
    means we evaluated (1 < 2 || 3 != 3) to arrive at (true || [3 != 3]) and evaluated that to arrive at “true”. The 3 != 3 was never executed due to short circuiting.

a) (true && true) || false
Answer: true || false
        true

b) (false && true) || true
Answer: false || true
        true

c) (false && true) || false || true
Answer: false || false || true
        false || true
        true

d) (5 > 6 || 4 > 3) && (7 > 8)
Answer: (false || true) && (7 > 8)
        true && (7 > 8)
        true && false
        false

e) !(7 > 6 || 3 > 4)
Answer: !(true || 3 > 4)
        !(true || false)
        !true
        false

Question #2
    In lesson 6.3 -- Remainder and Exponentiation, we wrote a function to determine whether a number is even that looked like this:
        #include <iostream>

        bool isEven(int x)
        {
            // if x % 2 == 0, 2 divides evenly into our number, which means it must be an even number
            return (x % 2) == 0;
        }

        int main()
        {
            std::cout << "Enter an integer: ";
            int x{};
            std::cin >> x;

            if (isEven(x))
                std::cout << x << " is even\n";
            else
                std::cout << x << " is odd\n";

            return 0;
        }
    Rewrite this function using operator! instead of operator==.

Answer: */

#include <iostream>

bool isEven(int x)
{
    return !(x % 2);
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (isEven(x))
        std::cout << x << " is even\n";
    else
        std::cout << x << " is odd\n";

    return 0;
}
