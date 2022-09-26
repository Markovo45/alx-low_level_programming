#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: String to check
 * @accept: string to check against
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
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
		if (!accept[j])
			break;
		++i;
	}
	return (i);
}
