#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of byte to copy
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
