#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, except 2 & 4.
 * Return: 0.
 */

void print_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if ((c != '2') && (c != 4))
			_putchar(c);
		++c;
	}
	_putchar('\n');
}