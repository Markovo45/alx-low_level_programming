#include <stdio.h>

/**
 *The main function uses standard input and output
 *
 * Descriprion: this program prints the alphebet in lowercase
 * followed by a new line.
 * Return: 0
 */
int main (void)
{
	char a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
