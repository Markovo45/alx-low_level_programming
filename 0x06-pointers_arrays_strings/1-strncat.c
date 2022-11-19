#include "main.h"
/**
 * main: _strncat - Concatenates the string pointed to by @src.
 * @n: The number of bytes of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strncat(char *dest, char *src, int n);
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
	{
		if (index < n)
		dest[dest_len++] = src[index];
	}
	return (dest);
}
