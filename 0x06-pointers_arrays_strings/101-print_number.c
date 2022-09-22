#include "main.h"

/**
 * print_number - Print the given int one digit at a time
 * @n: The integer to print
 *
 * Return: none
 */
void print_number(int n)
{
	int a;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
		 a = n;
	if (n / 10)
		print_number(a / 10);
	_putchar(a % 10 + '0');
}
