#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * Return: 0
 */
void jack_bauer(void)
	{
	int a = 0;

	while (a <= 2)
	{
	int b = 0;

	while (b <= 9)
	{
	int c = 0;

	while (c <= 5)
	{
	int d = 0;

	while (d <= 9)
	{
	if ((a + b) < 6)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');
	}
	++d;
	}
	++c;
	}
	++b;
	}
	++a;
	}
	}
