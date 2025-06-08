#include "a.h" //work with and without this because b.h already has a.h inside it and it has a header guard
#include "b.h"
#include <iostream>

int main()
{
    int num { a( 4 ) };
    int num2 { b( 5 ) };
    std::cout << num + num2;

    return 0;
}
