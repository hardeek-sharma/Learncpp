/*
Question #2

Specify whether objects of each of the given types should be passed by value, const address, or const reference. 
You can assume the function that takes these types as parameters doesn’t modify them.

a) char
// value

b) std::string
// reference

c) unsigned long
// value

d) bool
// value

e) An enumerated type
// value

f)
    struct Position
    {
        double x{};
        double y{};
        double z{};
    };
// reference

g)
    struct Player
    {
        int health{};
        // The Player struct is still under development.  More members will be added.
    };
// reference

h) int (when null is a valid argument)
// address

i) std::string_view
// value
*/
