#include <stdio.h>

/**
 *main - print alphabets in lower case in reverse
 *
 * Descriprion: using the main function
 * this program prints the alphebet in lowercase in reverse
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a = a - 1;
	}
	putchar('\n');
	return (0);
}
