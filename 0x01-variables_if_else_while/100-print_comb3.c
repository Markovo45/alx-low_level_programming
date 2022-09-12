#include <stdio.h>

/**
 *main - print all possible combinations of two-digit numbers.
 *
 * Descriprion: using the main function
 * this program prints all possible combinations of two-digit numbers.
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
		if (b <= 57 && a != b && a < b)
		{
			putchar(a);
			putchar(b);
			if (a < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		 ++b;
	}
		 ++a;
}
	putchar('\n');
	return (0);
}
