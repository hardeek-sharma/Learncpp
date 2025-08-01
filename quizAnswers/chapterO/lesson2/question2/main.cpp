/*
Question #2

A bitwise rotation is like a bitwise shift, except that any bits shifted off one end are added back to the other end. For example 0b1001 << 1 would be 0b0010, but a left rotate by 1 would result in 0b0011 instead. Implement a function that does a left rotate on a std::bitset<4>. For this one, it’s okay to use test() and set().

The following code should execute:

        #include <bitset>
        #include <iostream>

        // "rotl" stands for "rotate left"
        std::bitset<4> rotl(std::bitset<4> bits)
        {
        // Your code here
        }

        int main()
        {
            std::bitset<4> bits1{ 0b0001 };
            std::cout << rotl(bits1) << '\n';

            std::bitset<4> bits2{ 0b1001 };
            std::cout << rotl(bits2) << '\n';

            return 0;
        }
and print the following:

0010
0011
*/

#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    const bool x{ bits.test(3)};
    bits <<= 1;
    if (x)
    {
        bits.flip(0);
    }

    return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}
