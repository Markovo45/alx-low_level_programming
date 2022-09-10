#include <stdio.h>

/**
 *main - print alphabets in lower case
 *
 * Descriprion: using the main function
 * this program prints the alphebet in lowercase
 * except letters q and e followed by a new line.
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	if (a != 'e' && a != 'q')
	{
		putchar(a);
	}
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
