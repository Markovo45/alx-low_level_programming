#include "main.h"
/**
 * _strcmp - compares s1 and s2.
 * @s1: first string.
 * @s2: Second string.
 * Return: an integer value.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
		if (s1[i] || s2[i] != '\0')
		++i;
	return (s1[i] - s2[i]);
}
