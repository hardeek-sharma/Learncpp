/*
Question #1

In designing a game, we decide we want to have monsters, because everyone likes fighting monsters. Declare a struct that 
represents your monster. The monster should have a type that can be one of the following: an ogre, a dragon, an orc, 
a giant spider, or a slime.

Each individual monster should also have a name (use a std::string), as well as an amount of health that represents how 
much damage they can take before they die. Write a function named printMonster() that prints out all of the struct’s members. 
Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().

Your program should produce the following output:
    This Ogre is named Torg and has 145 health.
    This Slime is named Blurp and has 23 health.
*/


#include <iostream>

struct Monster
{
    enum Type
    {
        ogre,
        dragon,
        orc,
        giant_spider,
        slime,
    };

    Type type{};
    std::string name{};
    int health{};
};

constexpr std::string_view getMonsterType(Monster::Type type)
{
    switch (type)
    {
    case Monster::ogre: return "ogre";
    case Monster::dragon:   return "dragon";
    case Monster::orc:  return "orc";
    case Monster::giant_spider: return "giant spider";
    case Monster::slime: return "slime";
    default:    return "???";
    }
}

void printMonster(const Monster& monster)
{
    std::cout << "This " << getMonsterType(monster.type) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster ogre{Monster::ogre, "Torg", 145};
    Monster slime{Monster::slime, "Blurp", 23};

    printMonster(ogre);
    printMonster(slime);

    return 0;
}
