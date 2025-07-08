/*
Question #1
    What is an early return, and what is its behavior?

Answer:
    An early return is a return statement that is not the last statement of a function and if used stops the function earlier
*/



/*
Question #2
    A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself. Write a program that asks the 
    user to enter a number 0 through 9 (inclusive). If the user enters a number within this range that is prime (2, 3, 5, or 7), 
    print “The digit is prime”. Otherwise, print “The digit is not prime”.
        
Answer:
    #include <iostream>

    bool isPrime(int x)
    {
        if (x == 2) // if user entered 2, the digit is prime
            return true;
        else if (x == 3) // if user entered 3, the digit is prime
            return true;
        else if (x == 5) // if user entered 5, the digit is prime
            return true;            
        else if (x == 7) // if user entered 7, the digit is prime
            return true;

        return false; // if the user did not enter 2, 3, 5, 7, the digit must not be prime
        }

    int main()
    {
        std::cout << "Enter a number 0 through 9: ";
        int x {};
        std::cin >> x;

        if ( isPrime(x) )
            std::cout << "The digit is prime\n";
        else
            std::cout << "The digit is not prime\n";

        return 0;
        }
*/

/*
Question 3
    How can the length of the following code be reduced (without changing the formatting)?

        #include <iostream>

        bool isAllowedToTakeFunRide()
        {
        std::cout << "How tall are you? (cm)\n";

        double height{};
        std::cin >> height;

        if (height >= 140.0)
            return true;
        else
            return false;
        }

        int main()
        {
        if (isAllowedToTakeFunRide())
            std::cout << "Have fun!\n";
        else
            std::cout << "Sorry, you're too short.\n";

        return 0;
        }

Answer:
    You don't need a whole new function for 'height >= 140.0' and can just input it into the if statement.
*/
