/*
Question #2

For each subitem, answer whether the action described will result in behavior that is: predictable, undefined, or possibly undefined. If the answer is “possibly undefined”, 
clarify when.

Assume that any objects mentioned are of a type that the pointer can point to.

2a) Assigning the address of an object to a non-const pointer
// predictable


2b) Assigning nullptr to a pointer
// predictable


2c) Dereferencing a pointer to a valid object
// predictable


2d) Dereferencing a dangling pointer
// undefined


2e) Dereferencing a null pointer
// undefined


2f) Dereferencing a non-null pointer
// possible undefined
// is ok when pointer is not dangling but undefined if dangling
*/
