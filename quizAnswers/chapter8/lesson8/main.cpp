/*
                    #include <iostream>

                    int main()
                    {
                        // outer loops between 1 and 5
                        int outer{ 1 };
                        while (outer <= 5)
                        {
                            // For each iteration of the outer loop, the code in the body of the loop executes once

                            // inner loops between 1 and outer
                            // note: inner will be created and destroyed at the end of the block
                            int inner{ 1 };
                            while (inner <= outer)
                            {
                                std::cout << inner << ' ';
                                ++inner;
                            }

                            // print a newline at the end of each row
                            std::cout << '\n';
                            ++outer;
                        } // inner destroyed here

                        return 0;
                    }
*/

#define q4

/*
Question #1
    In the above program, why is variable inner declared inside the while block instead of immediately following the declaration of outer?
Answer: 
    if it was declared along side outer when each iteration of the outer loop happened inner wouldn't reset and instead of printing 1, 1 2, 1 2 3, it would print out 1, 2 3, 4 5 6,

Question #2
    Write a program that prints out the letters a through z along with their ASCII codes. Use a loop variable of type char.
Answer: */

#ifdef q2

#include <iostream>

int main()
{
    char letter{ 'a' };
    while (letter <= 'z')
    {
        std::cout << letter << " - " << static_cast<int>(letter) << '\n';
        ++letter;
    }

    return 0;
}

#endif


/*
Question #3
    Invert the nested loops example so it prints the following: 
        5 4 3 2 1
        4 3 2 1
        3 2 1
        2 1
        1
Answer: */

#ifdef q3

#include <iostream>

int main()
{
    int outer{ 5 };
    while (outer >= 1)
    {
        int inner{ outer };
        while (inner >= 1)
        {
            std::cout << inner << ' ';
            --inner;
        }

        std::cout << '\n';
        --outer;
    }

    return 0;
}

#endif

/*
Question #4
    Now make the numbers print like this:
                1
              2 1
            3 2 1
          4 3 2 1
        5 4 3 2 1
Answer: */

#ifdef q4

#include <iostream>

int main()
{
    int outer{ 1 };

    while (outer <= 5)
    {
        int space{ 0 };
        while(space < 6 - outer)
        {
            std::cout << ' ';
            ++space;
        }

        int block{ 0 };
        while(block < outer)
        {
            std::cout << block + 1;
            ++block;
        }

        std::cout << '\n';

        ++outer;
    }
}

#endif
