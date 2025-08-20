#include <iostream>

int getinteger();

int main()
{
    int x{ getinteger() };
    int y{ getinteger() };

    std::cout << x << " + " << y << " is " << x + y;
    return 0;
}
