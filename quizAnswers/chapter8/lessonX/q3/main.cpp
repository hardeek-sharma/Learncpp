/*
Question #3

Implement a game of Hi-Lo. First, your program should pick a random integer between 1 and 100. The user is given 7 tries to guess the number.

If the user does not guess the correct number, the program should tell them whether they guessed too high or too low. If the user guesses the right number, the program 
should tell them they won. If they run out of guesses, the program should tell them they lost, and what the correct number is. At the end of the game, the user should be 
asked if they want to play again. If the user doesn’t enter ‘y’ or ‘n’, ask them again.

For this quiz, assume the user enters a valid number.

Use the Random.h header from 8.15 -- Global random numbers (Random.h).

Here’s what your output should look like:
"
    Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.
    Guess #1: 64
    Your guess is too high.
    Guess #2: 32
    Your guess is too low.
    Guess #3: 54
    Your guess is too high.
    Guess #4: 51
    Correct! You win!
    Would you like to play again (y/n)? y
    Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.
    Guess #1: 64
    Your guess is too high.
    Guess #2: 32
    Your guess is too low.
    Guess #3: 54
    Your guess is too high.
    Guess #4: 51
    Your guess is too high.
    Guess #5: 36
    Your guess is too low.
    Guess #6: 45
    Your guess is too low.
    Guess #7: 48
    Your guess is too low.
    Sorry, you lose. The correct number was 49.
    Would you like to play again (y/n)? q
    Would you like to play again (y/n)? n
    Thank you for playing.
"
For extra credit: make the minimum and maximum values and the number of guesses a configurable parameter.
*/

#include "Random.h"
#include <iostream>
#include <string>

void startGame();

void askToReplay()
{
    char play{};

    while (play != 'y' && play != 'n')
    {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> play;
    }
    

    if (play == 'y')
    {
        startGame();
    }
    else if (play == 'n')
    {
        std::cout << "Thank you for playing.\n";
    }
}

int getGuess(int x)
{
    std::cout << "Guess #" << x << ": ";
    int guess{};
    std::cin >> guess;
    
    return guess;
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

void startGame()
{
    

    std::cout << "Minimum: ";
    int min{};
    std::cin >> min;

    std::cout << "Maximum: ";
    int max{};
    std::cin >> max;

    std::cout << "Tries: ";
    int tries{};
    std::cin >> tries;

    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << tries << " tries to guess what it is.\n";
    int i{ 1 };

    const int num{ Random::get(min, max) };
    
    while (i <= tries)
    {
        int guess{ getGuess(i) };

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

int main()
{
    startGame();
    
    return 0;
}
