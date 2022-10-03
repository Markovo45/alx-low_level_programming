#include "main.h"

/**
 * _print_rev_recursion - The function prints a string in reverse.
 *
 * Description: The function prints a string in reverse followed by a new line.
 * @s: the function arguement.
 * Return: 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

