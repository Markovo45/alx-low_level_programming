#include "main.h"

/**
 * factorial - The function calculates the length of a string.
 * @n: the function arguement.
 * Return: 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

