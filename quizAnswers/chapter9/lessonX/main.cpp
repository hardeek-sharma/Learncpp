/*
Question #1

In a quiz for lesson 8.x -- Chapter 8 summary and quiz, we implemented a game of Hi-Lo.

Update your previous solution to handle invalid guesses (e.g. ‘x’), out of bounds guesses (e.g. 0 or 101), or valid guesses that have extraneous characters (e.g. 43x). Also 
handle the user entering extra characters when the game asks them whether they want to play again.

Hint: Write a separate function to handle the user inputting their guess (along with the associated error handling).
*/

#include "Random.h"
#include <iostream>
#include <string>


void startGame();
void ignoreLine();
int getMin();
int getMax();
int getTries();
int getGuess(int x, int min, int max);
bool hiOrLow(int num, int guess, int i);
void askToReplay();

int main()
{
    startGame();
    
    return 0;
}

void startGame()
{
    int min{};
    int max{};

    while(true)
    {
        min = getMin();
        max = getMax();

        if (min > max)
        {
            std::cout << "Minimum cannot be greater than Maximum. Try again.\n";
            continue;
        }
        else if (min == max)
        {
            std::cout << "Minimum and Maximum cannot be the same. Try again.\n";
            continue;
        }

        break;
    }

    int tries{ getTries() };

    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << tries << " tries to guess what it is.\n";
    int i{ 1 };

    const int num{ Random::get(min, max) };
    
    while (i <= tries)
    {
        int guess{ getGuess(i, min, max) };

        if (hiOrLow(num, guess, i))
        {
            break;
        }

        ++i;
    }

    if (i == tries + 1)
    {
        std::cout << "Sorry, you lose. The correct number was " << num << ".\n";
        ++i;
        askToReplay();
    }
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getMin()
{
    while (true)
    {
        std::cout << "Minimum: ";
        int min{};
        std::cin >> min;

        if (!std::cin)
        {
            std::cin.clear(); 
            ignoreLine(); 
            std::cout << "That input was invalid. Try again.\n";
            continue;
        }

        ignoreLine();

        return min;
    }
}

int getMax()
{
    while (true)
    {
        std::cout << "Maximum: ";
        int max{};
        std::cin >> max;

        if (!std::cin)
        {
            std::cin.clear(); 
            ignoreLine(); 
            std::cout << "That input was invalid. Try again.\n";
            continue;
        }

        ignoreLine();

        return max;
    }
}

int getTries()
{
    while (true)
    {
        std::cout << "Tries: ";
        int tries{};
        std::cin >> tries;

        if (!std::cin)
        {
            std::cin.clear(); 
            ignoreLine();
            std::cout << "That input was invalid. Try again.\n";
            continue;
        }

        if (tries <= 0)
        {
            std::cout << "You cannot have less than 1 try. Try again.\n";
            continue;
        }

        ignoreLine();

        return tries;
    }
}

int getGuess(int x, int min, int max)
{
    while (true)
    {
        std::cout << "Guess #" << x << ": ";
        int guess{};
        std::cin >> guess;

        if (!std::cin)
        {
            std::cin.clear(); 
            ignoreLine(); 
            std::cout << "That input was invalid. Try again.\n";
            continue;
        }

        ignoreLine();

        if (guess < min || guess > max)
        {
            std::cout << "Your guess is out of bounds. Guess again.\n";
            continue;
        }
    
        return guess;
    }
    
}

bool hiOrLow(int num, int guess, int i)
{
    if (guess < num)
    {
        std::cout << "Your guess is too low.\n";
    }
    else if (guess > num)
    {
        std::cout << "Your guess is too high.\n";
    }
    else
    {
        std::cout << "Correct! You win!\n";
        askToReplay();

        return true;
    }

    return false;
}

void askToReplay()
{
    char play{};

    while(true)
    {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> play;

        ignoreLine();

        switch (play)
        {
        case 'y':
            startGame();
        case 'n':
            std::cout << "Thank you for playing.\n";
            std::exit(0);
        default:
            std::cout << "That input is invalid. Try again.\n";
        }
    }
}
