#include "function_pointers.h"

/**
 * print_name - Print a name from a function pointer
 *
 * @name: The string name function
 *
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
