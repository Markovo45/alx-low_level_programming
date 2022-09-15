#include "main.h"
/**
 * _isupper - checks for upper case letters.
 * int - is the argument for the function int _isupper.
 * Return: 0.
 */
int _isupper(int)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

