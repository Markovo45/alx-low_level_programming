#include "main.h"
/**
 * cap_string - Capitalize all words of a string.
 * @c: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		while (c[i] >= 'a' && c[i] <= 'z')
	{
		if (c[i - 1] == ' ' ||
				c[i - 1] == '\t' ||
				c[i - 1] == '\n' ||
				c[i - 1] == ',' ||
				c[i - 1] == ';' ||
				c[i - 1] == '.' ||
				c[i - 1] == '!' ||
				c[i - 1] == '?' ||
				c[i - 1] == '"' ||
				c[i - 1] == '(' ||
				c[i - 1] == ')' ||
				c[i - 1] == '{' ||
				c[i - 1] == '}' ||
				i == 0)
			c[i] = c[i] - 32;
		++i;
	}
		++i;
	}
	return (c);
}
