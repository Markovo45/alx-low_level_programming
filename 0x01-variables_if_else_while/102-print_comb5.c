#include <stdio.h>

/**
 *main - print all possible combinations of two two-digit numbers.
 *
 * Descriprion: using the main function
 * this program prints all possible combinations of two two-digit.
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b;

	while (a <= 98)
	{
		b = a + 1;

		while (b <= 99)
		{
			if (a != b)
			{

				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
			if (a <= 97 && a != b && b <= 99)
				putchar(',');
				putchar(' ');
			}
			++b;
		}
		++a;
	}
	putchar('\n');
	return (0);
}
