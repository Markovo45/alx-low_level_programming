#include "main.h"

/**
 * _strlen_recursion - The function calculates the length of a string.
 * @s: the function arguement.
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		n += _strlen_recursion(s + 1);
	}
	return (n);
}

