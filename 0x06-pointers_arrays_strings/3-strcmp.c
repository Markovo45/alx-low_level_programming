#include "main.h"
/**
 * _strcmp - compares s1 and s2.
 * @s1: first string.
 * @s2: Second string.
 * Return: an integer value.
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}
