#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s: pointer
 * @b: char argument
 * @n: number of byte to use
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
