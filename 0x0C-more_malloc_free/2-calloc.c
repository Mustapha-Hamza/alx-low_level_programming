#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);


	k = arr;
	for (i = 0; i < nmemb * size; i++)
		k[i] = 0;
	return (arr);
}
