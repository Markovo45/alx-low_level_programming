#include "main.h"

/**
 * _pow_recursion - The function calculates the length of a string.
 * @x: a function arguement
 * @y: a function arguement
 * Return: 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

