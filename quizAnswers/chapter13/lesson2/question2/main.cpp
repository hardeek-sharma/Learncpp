/*
Question #2

Put the MonsterType enumeration inside a namespace. Then, create a main() function and instantiate a troll. The program should compile.
*/

namespace MonsterType
{
    enum MonsterType
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}

int main()
{
    MonsterType::MonsterType monster{MonsterType::troll};
}
