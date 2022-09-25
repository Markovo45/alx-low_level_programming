#include "main.h"

/**
 * _puts2 - prints half the length of string.
 * @str: the function argument
 * Return: 0.
 */
void _puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
		b++;
	a = 0;
	while (a < b)
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
