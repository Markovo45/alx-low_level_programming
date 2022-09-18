#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: 0.
 */

void more_numbers(void)
{
	int a = 1;
	int c;

	while (a <= 10)
	{
		c = 0;
		while (c <= 14)
		{
			_putchar(c + '0');
			++c;
		}
		++a;
		_putchar('\n');
	}
	_putchar('\n');
}
