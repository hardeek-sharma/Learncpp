/*
Question #1

In lesson 4.x -- Chapter 4 summary and quiz, we wrote a program to simulate a ball falling off of a tower. Because we didn’t have loops yet, the ball could only fall for 5 seconds.

Take the program below and modify it so that the ball falls for as many seconds as needed until it reaches the ground. Update the program to use all covered best practices (namespaces, constexpr, etc…).

        #include <iostream>

        // Gets tower height from user and returns it
        double getTowerHeight()
        {
            std::cout << "Enter the height of the tower in meters: ";
            double towerHeight{};
            std::cin >> towerHeight;
            return towerHeight;
        }

        // Returns the current ball height after "seconds" seconds
        double calculateBallHeight(double towerHeight, int seconds)
        {
            const double gravity { 9.8 };

            // Using formula: s = (u * t) + (a * t^2) / 2
            // here u (initial velocity) = 0, so (u * t) = 0
            const double fallDistance { gravity * (seconds * seconds) / 2.0 };
            const double ballHeight { towerHeight - fallDistance };

            // If the ball would be under the ground, place it on the ground
            if (ballHeight < 0.0)
                return 0.0;

            return ballHeight;
        }

        // Prints ball height above ground
        void printBallHeight(double ballHeight, int seconds)
        {
            if (ballHeight > 0.0)
                std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
            else
                std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
        }

        // Calculates the current ball height and then prints it
        // This is a helper function to make it easier to do this
        void calculateAndPrintBallHeight(double towerHeight, int seconds)
        {
            const double ballHeight{ calculateBallHeight(towerHeight, seconds) };
            printBallHeight(ballHeight, seconds);
        }

        int main()
        {
            const double towerHeight{ getTowerHeight() };

            calculateAndPrintBallHeight(towerHeight, 0);
            calculateAndPrintBallHeight(towerHeight, 1);
            calculateAndPrintBallHeight(towerHeight, 2);
            calculateAndPrintBallHeight(towerHeight, 3);
            calculateAndPrintBallHeight(towerHeight, 4);
            calculateAndPrintBallHeight(towerHeight, 5);

            return 0;
        }
*/

#include <iostream>

// Gets tower height from user and returns it
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Returns the current ball height after "seconds" seconds
double calculateBallHeight(double towerHeight, int seconds)
{
	const double gravity { 9.8 };

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	const double fallDistance { gravity * (seconds * seconds) / 2.0 };
	const double ballHeight { towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void calculateAndPrintBallHeight(double towerHeight)
{
    int seconds{ 0 };
	double ballHeight{ calculateBallHeight(towerHeight, seconds) };

    while (ballHeight > 0)
    {
        ballHeight = calculateBallHeight(towerHeight, seconds);
        printBallHeight(ballHeight, seconds);

        ++seconds;
    }
}

int main()
{
	const double towerHeight{ getTowerHeight() };

	calculateAndPrintBallHeight(towerHeight);

	return 0;
}
