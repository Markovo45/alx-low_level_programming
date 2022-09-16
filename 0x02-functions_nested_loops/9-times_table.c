#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: 0
 */
void times_table(void)
{
	int a, multi, prod;

	a = 0;

	while (a <= 9)
	{
		_putchar('0');

		multi = 1;

		while (multi <= 9)
		{
			_putchar(',');
			_putchar(' ');

			prod = a * multi;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
		++multi;
		}
		_putchar('\n');
		++a;
	}
}

