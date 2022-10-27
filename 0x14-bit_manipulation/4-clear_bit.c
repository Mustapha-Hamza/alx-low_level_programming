#include "main.h"

/**
 * clear_bit - Set the value of a bit at a given index to 0
 * @n: The unsigned long int to print in binary
 * @index: The index at which to set the value to 0
 *
 * Return: 1 if it succeeds, -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear_bit(unsigned long int *n, unsigned int index)

		if (index >= (sizeof(*n) * 8))
			return (-1);
		mask = 1;
		mask = mask << index;
		mask = ~mask;
		*n = *n & mask;

		return (1);
}


