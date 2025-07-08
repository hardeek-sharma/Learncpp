#define extra1

/*
Question #1

Pick the appropriate data type for a variable in each of the following situations. Be as specific as possible. If the answer is an integer, pick int (if size isn’t important), or a specific fixed-width integer type (e.g. std::int16_t) based on range.

a) The age of the user (in years) (assume the size of the type isn’t important)
    Answer: Int

b) Whether the user wants the application to check for updates
    Answer: Bool or char or string 

c) pi (3.14159265)
    Answer: double

d) The number of pages in a textbook (assume size is not important)
    Answer: int

e) The length of a couch in feet, to 2 decimal places (assume size is important)
    Answer: float

f) How many times you’ve blinked since you were born (note: answer is in the millions)
    Answer: std::int32_t

g) A user selecting an option from a menu by letter
    Answer: char

h) The year someone was born (assuming size is important)
    Answer: std::int16_t


*/


/*
Question #2



Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31

Answer: */
#ifdef q2
    #include <iostream>

    void calculate(double num1, char sign, double num2);

    int main()
    {
        std::cout << "Enter a double value: ";
        double num1 {};
        std::cin >> num1;

        std::cout << "Enter a double value: ";
        double num2 {};
        std::cin >> num2;

        std::cout << "Enter +, -, *, or /: ";
        char sign {};
        std::cin >> sign;

        calculate(num1, sign, num2);

        return 0;
    }

    void calculate(double num1, char sign, double num2)
    {
        double answer {};

        if (sign == '*')
        {
            answer = num1 * num2;
        }
        else if (sign == '/')
        {
            answer = num1 / num2;
        }
        else if (sign == '+')
        {
            answer = num1 + num2;
        }
        else if (sign == '-')
        {
            answer = num1 - num2;
        }
        else
        {
            return;
        }

        std::cout << num1 << ' ' << sign << ' ' << num2 << " is " << answer << '\n';
    }


#endif



/*
Question #3

Extra credit: This one is a little more challenging.

Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2

Expected output:

Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.

Answer: */
#ifdef extra1
    #include <iostream>

    double fallen(double sec);
    void printHeight(double height, double sec);

    const double GRAVITY {9.8}; // Equation: fallen = gravity_constant * x_seconds2 / 2

    int main()
    {
        std::cout << "Enter the height of the tower in meters: ";
        double height{};
        std::cin >> height;

        printHeight(height, 0);
        printHeight(height, 1);
        printHeight(height, 2);
        printHeight(height, 3);
        printHeight(height, 4);
        printHeight(height, 5);

        return 0;
    }

    void printHeight(double height, double sec)
    {
        double newHeight {height - fallen(sec)};
        if (newHeight <= 0)
        {
            std::cout << "At " << sec <<" seconds, the ball is on the ground\n";
        }
        else
        {
        std::cout << "At " << sec <<" seconds, the ball is at height: " << newHeight << '\n';
        }
    }

    double fallen(double sec)
    {
        double fallen {GRAVITY * (sec * sec) / 2};

        return fallen;
    }




#endif
