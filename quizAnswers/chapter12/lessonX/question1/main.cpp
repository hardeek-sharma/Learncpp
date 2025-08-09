/*
Question #1

For each of the following expressions on the right side of operator <<, indicate whether the expression is an lvalue or rvalue:

a) 
    std::cout << 5;
// rvalue

b) 
    int x { 5 };
    std::cout << x;
// lvalue

c)
    int x { 5 };
    std::cout << x + 1;
// rvalue

d)
    int foo() { return 5; }
    std::cout << foo();
// rvalue

e)
    int& max(int &x, int &y) { return x > y ? x : y; }
    int x { 5 };
    int y { 6 };
    std::cout << max(x, y);
// lvalue
*/
