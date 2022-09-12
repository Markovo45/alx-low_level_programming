#include <stdio.h>

/**
 *main - print all possible combinations of three-digit numbers.
 *
 * Descriprion: using the main function
 * this program prints all possible combinations of three-digit numbers.
 * followed by a new line.
 * Return: 0
 */
int main(void)

{
	int a = 48;

	while (a <= 57)
{	int b = 49;

	while (b <= 57)
	{
	int c = 50;

	while (c <= 57)
	{
		if (c <= 57 && a != b && b != c && a < b && b < c)
		{
			putchar(a);
			putchar(b);
			putchar(c);
			if (c < 55)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++c;
	}
		 ++b;
	}
		 ++a;
}
	putchar('\n');
	return (0);
}
