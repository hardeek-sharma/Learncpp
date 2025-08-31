/*
Question #2

In lesson 13.10 -- Passing and returning structs, we wrote a short program using a Fraction struct. The reference solution looks like this:

    #include <iostream>

    struct Fraction
    {
        int numerator{ 0 };
        int denominator{ 1 };
    };

    Fraction getFraction()
    {
        Fraction temp{};
        std::cout << "Enter a value for numerator: ";
        std::cin >> temp.numerator;
        std::cout << "Enter a value for denominator: ";
        std::cin >> temp.denominator;
        std::cout << '\n';

        return temp;
    }

    Fraction multiply(const Fraction& f1, const Fraction& f2)
    {
        return { f1.numerator * f2.numerator, f1.denominator * f2.denominator };
    }

    void printFraction(const Fraction& f)
    {
        std::cout << f.numerator << '/' << f.denominator << '\n';
    }

    int main()
    {
        Fraction f1{ getFraction() };
        Fraction f2{ getFraction() };

        std::cout << "Your fractions multiplied together: ";

        printFraction(multiply(f1, f2));

        return 0;
    }

Convert Fraction from a struct to a class. Convert all of the functions to (non-static) member functions.
*/

#include <iostream>

class Fraction
{
    int m_numerator{ 0 };
    int m_denominator{ 1 };

public:
    explicit Fraction(int numerator=0, int denominator=1)
        : m_numerator { numerator }, m_denominator { denominator}
    {
    }

    void getFraction()
    {
        std::cout << "Enter a value for numerator: ";
        std::cin >> m_numerator;
        std::cout << "Enter a value for denominator: ";
        std::cin >> m_denominator;
        std::cout << '\n';
    }

    Fraction multiply(const Fraction& f) const
    {
        return Fraction{ m_numerator * f.m_numerator, m_denominator * f.m_denominator };
    }

    void printFraction()
    {
        std::cout << m_numerator << '/' << m_denominator << '\n';
    }
};

int main()
{
    Fraction f1{};
    f1.getFraction();

    Fraction f2{};
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    ( f1.multiply(f2) ).printFraction();

    return 0;
}

/*
Question #3
 In the prior quiz solution, why was the Fraction constructor made explicit?
// so we can't just implicitly define it or define it with only one value.

Question #4
 In the prior quiz question, why might it be better to leave getFraction() and print() as non-members?
// because it makes the interface less cluttered and is easier to understand and use.
 */
