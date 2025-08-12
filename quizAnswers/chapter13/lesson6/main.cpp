/*
Define an enum class named Animal that contains the following animals: pig, chicken, goat, cat, dog, duck. Write a function named getAnimalName() that takes an Animal 
parameter and uses a switch statement to return the name for that animal as a std::string_view (or std::string if you’re using C++14). Write another function named 
printNumberOfLegs() that uses a switch statement to print the number of legs each animal walks on. Make sure both functions have a default case that prints an error 
message. Call printNumberOfLegs() from main() with a cat and a chicken. Your output should look like this:
    A cat has 4 legs.
    A chicken has 2 legs.
*/
#include <iostream>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

std::string_view getAnimalName(Animal animal);
void printNumberOfLegs(Animal animal);

int main()
{
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal:: chicken);
}

std::string_view getAnimalName(Animal animal)
{
    using enum Animal;

    switch(animal)
    {
    case pig:
        return "pig";
    case chicken:
        return "chicken";
    case goat:
        return "goat";
    case cat:
        return "cat";
    case dog:
        return "dog";
    case duck:
        return "duck";
    default:
        return "error";
    }
}

void printNumberOfLegs(Animal animal)
{
    using enum Animal;

    switch(animal)
    {
    case pig:
    case goat:
    case cat:
    case dog:
        std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
        break;
    case duck:
    case chicken:
        std::cout << "A " << getAnimalName(animal) << " has 2 legs.\n";
        break;
    default:
        std::cout << "error\n";
    }
}
