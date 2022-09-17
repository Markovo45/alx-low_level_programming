#include <stdio.h>

/**
 *main - print all the numbers of base 16 in lowercase.
 *
 * Descriprion: using the main function
 * this program prints all the numbers of base 16 in lowercase.
 * followed by a new line.
 * Return: 0
 */
int main(void)

{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		++a;
	}
	while (a <= 102)
	{
		if (a >= 97 && a <= 102)
		putchar(a);
		++a;
	}
	putchar('\n');
	return (0);
}
