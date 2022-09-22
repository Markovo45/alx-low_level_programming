#include "main.h"

/**
 * print_square - prints a straight in the terminal.
 * @size: argument for the function.
 * Return: 0.
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		a = 1;

		while (a <= size)
		{
			b = 1;

			while (b <= size)
			{
				_putchar('#');
				++b;
			}
			_putchar('\n');
			++a;
		}
	}
}
