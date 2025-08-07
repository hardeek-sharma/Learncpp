/*
Question #2

What’s wrong with this snippet of code?

        int v1{ 45 };
        int* ptr{ &v1 }; // initialize ptr with address of v1

        int v2 { 78 };
        *ptr = &v2;     // assign ptr to address of v2
*/

// you don't need teh asterisk when trying to assign &v2 to ptr
