#include "main.h"

/**
 * *create_array - creats an array of chars,
 * and initializes it withh a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array  initialized or NuLL
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
