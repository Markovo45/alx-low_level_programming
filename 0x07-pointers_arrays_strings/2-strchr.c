#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: String
 * @c: Character to check for
 * Return: pointer to c in s or Null
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		if (*(s + n) == c)
			return (s + n);
		++n;
	}
	if (*(s + n) == c)
		return (s + n);
	return (0);
}
