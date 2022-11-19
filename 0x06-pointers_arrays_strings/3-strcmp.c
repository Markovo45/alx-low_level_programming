#include "main.h"
/**
 * _strcmp - compares s1 and s2.
 * @s1: first string.
 * @s2: Second string.
 * Return: an integer value.
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0, s1_len = 0, s2_len = 0;

	while (s1[index++])
		s1_len++;
	while (s2[index++])
		s2_len++;
	if (s1_len == s2_len)
		return (0);
	else if (s1_len < s2_len)
		return (-1);
	else
		return (1);
}
