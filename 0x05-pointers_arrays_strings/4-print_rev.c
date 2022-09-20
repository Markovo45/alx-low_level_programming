#include "main.h"

/**
 * print_rev - prints the string in reverse.
 * @s: the function argument
 * Return: 0.
 */
void print_rev(char *s)
{
	int length = strlen(s);

	while (length >= 0)
	{
		putchar(*(s + length));
		--length;
	}
	putchar('\n');
}
