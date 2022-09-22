#include "main.h"

/**
 * print_line - prints a straight in the terminal.
 * @n: argument for the function.
 * Return: 0.
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		a = 1;

		while (a <= n)
		{
			_putchar('_');
			++a;
		}
	}
		_putchar('\n');
}
