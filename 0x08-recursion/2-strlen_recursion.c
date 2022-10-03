#include "main.h"

/**
 * _strlen_recursion - The function calculates the length of a string.
 * @s: the function arguement.
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}

