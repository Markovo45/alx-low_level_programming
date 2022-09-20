#include "main.h"

/**
 * _puts - prints length of string.
 * @str: the function argument
 * Return: 0.
 */
void _puts(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		putchar(*(str + length));
		++length;
	}
	putchar('\n');
}
