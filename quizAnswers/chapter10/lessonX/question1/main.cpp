/*
Question #1

What type of conversion happens in each of the following cases? Valid answers are: No conversion needed, numeric promotion, numeric conversion, won’t compile due to narrowing conversion. Assume int and long are both 4 bytes.

int main()
{
    int a { 5 }; // 1a
    int b { 'a' }; // 1b
    int c { 5.4 }; // 1c
    int d { true }; // 1d
    int e { static_cast<int>(5.4) }; // 1e

    double f { 5.0f }; // 1f
    double g { 5 }; // 1g

    // Extra credit section
    long h { 5 }; // 1h

    float i { f }; // 1i (uses previously defined variable f)
    float j { 5.0 }; // 1j

}
*/

// 1a) no conversion needed

// 1b) numeric promotion

// 1c) won't compile due to narrowing conversion

// 1d) numeric promotion

// 1e) numeric conversion

// 1f) numeric promotion

// 1g) numeric conversion

// 1h) numeric conversion

// 1i) won't compile due to narrowing conversion

// 1j) numeric conversion
