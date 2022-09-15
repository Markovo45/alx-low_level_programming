#include "main.h"
/**
 * _isupper - checks for upper case letters.
 * @c: is the argument for the function int _isupper.
 * Return: 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}

