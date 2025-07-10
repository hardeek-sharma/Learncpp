/*
Question #1

For each statement, identify:

Whether the initializer is a constant expression or non-constant expression.
Whether the variable is a constant expression or non-constant expression.
a) char a { 'q' };
Answer:
    initializer: constant
    variable: non-constant

b) const int b { 0 };
Answer:
    initializer: constant
    variable: contstant

c) const double c { 5.0 };
Answer:
    initializer: constant
    variable: non-constant

d) const int d { a * 2 }; // a defined as char a { 'q' };
Answer:
    initializer: non-constant
    variable: non-constant

e) int e { c + 1.0 }; // c defined as const double c { 5.0 };
Answer:
    initializer: non-constant
    variable: non-constant

f) const int f { d * 2 }; // d defined as const int d { 0 };
Answer:
    initializer: constant
    variable: constant

g) const int g { getNumber() }; // getNumber returns an int by value
Answer:
    initializer: non-constant
    variable: non-constant

Extra credit:
h)  const int h{};
Answer:
    initializer: constant
    variable: constant

*/
