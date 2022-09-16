#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c;
	int d;

	while (a <= 23)
	{
		while (b <= 59)
		{
			c = a % 10;
			d = b % 10;
			_putchar(a / 10 + '0');
			_putchar(c + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(d + '0');
			_putchar('\n');
			++b;
		}
		++a;
		b = 0;
	}
}
