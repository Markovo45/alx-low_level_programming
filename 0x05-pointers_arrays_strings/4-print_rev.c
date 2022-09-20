#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints the string in reverse.
 * @s: the function argument
 * Return: 0.
 */
void print_rev(char *s)
{
	int length = strlen(s);

	while (length >= 1)
	{
		putchar(*(s + length));
		--length;
	}
	putchar('\n');
}
