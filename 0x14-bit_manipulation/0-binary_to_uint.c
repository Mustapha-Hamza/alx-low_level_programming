#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Convert a string representing a binary number to an
 * unsigned int decimal value
 * @b: The string containing the binary
 *
 * @b: The string containing the binary
 * if the string is NULL, return the decimal value on success
 */
if the string is NULL, return the decimal value on success
{
	unsigned int i, len;
	unsigned int decval;

	i = len = decval = 0;
	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	while (i < len)
	{
		decval = decval << 1;
		if (b[i] == '1')
			decval += 1;
		i++;
	}
	return (decval);
}
