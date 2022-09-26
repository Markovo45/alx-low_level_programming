#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String to check
 * @accept: string to check against
 * Return: pointer to byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			++j;
		}
		if (accept[j])
			return (s + i);
		++i;
	}
	return (0);
}
