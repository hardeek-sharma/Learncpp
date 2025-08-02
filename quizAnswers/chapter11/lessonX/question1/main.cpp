/*
Question #1

1a) What is the output of this program and why?

    #include <iostream>

    void print(int x)
    {
        std::cout << "int " << x << '\n';
    }

    void print(double x)
    {
        std::cout << "double " << x << '\n';
    }

    int main()
    {
        short s { 5 };
        print(s);

        return 0;
    }
// the output is 5 because a short to int is a promotion while a short to double is 
conversion and promotion is prioritized over conversion.

1b) Why won’t the following compile?

    #include <iostream>

    void print()
    {
        std::cout << "void\n";
    }

    void print(int x=0)
    {
        std::cout << "int " << x << '\n';
    }

    void print(double x)
    {
        std::cout << "double " << x << '\n';
    }

    int main()
    {
        print(5.0f);
        print();

        return 0;
    }
// because the function call print() can be resolved with more than one function which 
causes an error for ambiguity.

1c) Why won’t the following compile?

    #include <iostream>

    void print(long x)
    {
        std::cout << "long " << x << '\n';
    }

    void print(double x)
    {
        std::cout << "double " << x << '\n';
    }

    int main()
    {
        print(5);

        return 0;
    }
// both long and double have no higher precedence than the other so 5 cannot be 
converted to either.


*/
