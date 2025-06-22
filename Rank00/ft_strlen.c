/*
size_t strlen (const char *s)


The strlen function returns the length of the string s in bytes. (In other words, it
returns the offset of the terminating null byte within the array.)
For example

strlen ("hello, world")
⇒ 12

When applied to an array, the strlen function returns the length of the string stored
there, not its allocated size. You can get the allocated size of the array that holds a
string using the sizeof operator:
char string[32] = "hello, world";

*/

