#include "main.h"
/**
 * print_sign - prints the sign of a number..
 * @n: the int for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar(0);
	}
}
