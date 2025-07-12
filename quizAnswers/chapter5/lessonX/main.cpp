#define q4

/*
Question #1
    A) Why are named constants often a better choice than literal constants?
Answer: Named constansts make your code easier to read than literal constants.

    B) Why are const/constexpr variables usually a better choice than #defined symbolic constants?
Answer: #defined does not show up when debugging while const/constexpr does.


Question #2
    Find 3 issues in the following code: */
#ifdef q2
    #include <cstdint> // for std::uint8_t
    #include <iostream>

    int main()
    {
    std::cout << "How old are you?\n";

    std::uint8_t age{}; // MISTAKE: age is defined as an uint8_t which compilers usually convert to char which it not what we want
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas: ";

    if (age >= 16) // MISTAKE: Using magic number 16 without explaining. Though it we can easily use context clues for future/bigger projects we should make this a const/constexpr.
        std::cout << "Yes";
    else
        std::cout << "No";

    std::cout << '.\n'; // MISTAKE: there is a period and a \n in single quote which will cause an error. Plus we don't need a perios anyway.

    return 0;
    }
#endif
/*
desired output:
    How old are you?
    6
    Allowed to drive a car in Texas: No
    How old are you?
    19
    Allowed to drive a car in Texas: Yes

Question #3
    What are the primary differences between std::string and std::string_view?
    What can go wrong when using a std::string_view?

Answer: with string you can control the variable however you want and do whatever you want while witha. string_view you can only view the variable and can't do anything with it except read it.
        if the string_view's initializer is changed someway through the program or its initializer disapears the string_view will either be left dangling or be invalid.


Question #4
    Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:

    Enter the name of person #1: John Bacon
    Enter the age of John Bacon: 37
    Enter the name of person #2: David Jenkins
    Enter the age of David Jenkins: 44
    David Jenkins (age 44) is older than John Bacon (age 37).
Answer: */
#ifdef q4

#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::cout << "Enter the name of person #1: ";
    std::string name1{};
    std::getline(std::cin >> std::ws, name1);

    std::cout << "Enter the age of " << name1 << ": ";
    int age1{};
    std::cin >> age1;

    std::cout << "Enter the name of person #2: ";
    std::string name2{};
    std::getline(std::cin >> std::ws, name2);

    std::cout << "Enter the age of " << name2 << ": ";
    int age2{};
    std::cin >> age2;    

    if (age1 > age2)
    {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
    }
    else if (age2 > age1)
    {
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
    }
    else if (age1 == age2)
    {
        std::cout << name1 << " and " << name2 << " are the same age" << " (age " << age1 << ").\n";
    }
    else
    {
        std::cout << "Entered unusable character\n";
        return 1;
    }

    return 0;
}


#endif
/*
Question #5
    In the solution to the above quiz, why can’t variable age1 in main be constexpr?
Answer: because you ask the user for input and input cannot be given by the user during compile time which is the main criteria for being a constexpr.

*/
