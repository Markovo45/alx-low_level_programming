#include <stdio.h>

/**
 *main - print alphabets in lower case
 *
 * Descriprion: using the main function
 * this program prints the alphebet in lowercase
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
