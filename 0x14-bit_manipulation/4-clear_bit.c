#include "main.h"

/**
 * clear_bit - Set the value of a bit at a given index to 0
 * @n: The unsigned long int to print in binary
 * @index: The index at which to set the value to 0
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	if (*n & m)
		*n ^= m;

	return (1);
}


