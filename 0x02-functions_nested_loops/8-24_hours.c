#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * Return: 0
 */
void jack_bauer(void)
	{
	int a = 0;
	int b = 0;
	int c = a % 10;
	int d = b % 10;

	while (a <= 23)
	{
	while (b <= 59)
	{
		_putchar(a / 10 + '0');
		_putchar(c + '0');
		_putchar(':');
		_putchar(b / 10 + '0');
		_putchar(d + '0');
		++b;
		_puthcar('\n');
	}
	++a;
	b = 0;
	}
	}
