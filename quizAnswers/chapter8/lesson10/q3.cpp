/*
Question #3

What’s wrong with the following for loop?

// Print all numbers from 9 to 0
for (unsigned int i{ 9 }; i >= 0; --i)
    std::cout << i<< ' ';
*/

// since variable i is unsigned, it cannot go into the negatives, 
// but for the for loop to stop i has to go into the negatives 
// which means the error is variable i being unsigned.
