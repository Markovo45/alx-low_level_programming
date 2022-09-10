#include <stdio.h>

/**
 *main - print all single digit numbers of base 10 starting from 0
 *
 * Descriprion: using the main function
 * this program prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
