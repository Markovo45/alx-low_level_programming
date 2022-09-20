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
		_putchar(*(str + length));
		++length;
	}
	return (0);
}
