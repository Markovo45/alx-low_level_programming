#include "main.h"

/**
 * _puts_recursion - The function prints a string.
 *
 * Description: The function prints a string followed by a new line.
 * @s: the function arguement.
 * Return: 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

