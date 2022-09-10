#include <stdio.h>

/**
 *main - print all possible combinations of single-digit numbers.
 *
 * Descriprion: using the main function
 * this program prints all possible combinations of single-digit numbers.
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
