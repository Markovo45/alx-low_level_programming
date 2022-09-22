#include "main.h"

/**
 * print_line - prints a straight in the terminal.
 * @n: argument for the function.
 * Return: 0.
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		a = 1;

		while (a <= n)
		{
			b = 1;

			while (b < a)
			{
				_putchar(' ');
				++b;
			}
			_putchar('\\');
			++a;
		}
		_putchar('\n');
	}
}
