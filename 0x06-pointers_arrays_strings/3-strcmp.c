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

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
