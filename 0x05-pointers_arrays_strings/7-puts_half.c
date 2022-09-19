#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len, i;
	char *cp = str;

	for (len = 0; *cp != '\0'; cp++)
		len++;

	i = (len % 2 == 0) ? (len / 2) : ((len - 1) / 2);
	str += i;
	for (; i <= len; i++)
		_putchar(*str++);
	_putchar(9);
}
