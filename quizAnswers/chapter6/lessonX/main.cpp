/*
Complete the following program:

        #include <iostream>

        // Write the function getQuantityPhrase() here

        // Write the function getApplesPluralized() here

        int main()
        {
            constexpr int maryApples { 3 };
            std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

            std::cout << "How many apples do you have? ";
            int numApples{};
            std::cin >> numApples;

            std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

            return 0;
        }
Sample output:
    Mary has a few apples.
    How many apples do you have? 1
    You have a single apple.
getQuantityPhrase() should take a single int parameter representing the quantity of something and return the following descriptor:
    < 0 = “negative”
    0 = “no”
    1 = “a single”
    2 = “a couple of”
    3 = “a few”
    > 3 = “many”
getApplesPluralized() should take a single int parameter parameter representing the quantity of apples and return the following:
    1 = “apple”
    otherwise = “apples”
This function should use the conditional operator.

Answer: */

#include <iostream>

// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(int x)
{
    if (x < 0)
    {
        return "negative";
    }
    else if (x == 0)
    {
        return "no";
    }
    else if (x == 1)
    {
        return "a single";
    }
    else if (x == 2)
    {
        return "a couple";
    }
    else if (x == 3)
    {
        return "a few";
    }
    return "many";
}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(int x)
{
    return (x == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
