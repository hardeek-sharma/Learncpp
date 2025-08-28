/*
Question #1

In the lesson above, we noted that the parameter for a copy constructor must be a (const) reference. Why aren’t we allowed to use pass by value?
*/

// If we were to pass a class by value it would need to be copied by the copy constructor and for it to be copyable it would 
//need a copy constructor which would loop infinitely
