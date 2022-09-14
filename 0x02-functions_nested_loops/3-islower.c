#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: the int for the argument of the function
 * Return: 0
 */
int _islower(int c);
{
	int c = 'a';

	if (c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
