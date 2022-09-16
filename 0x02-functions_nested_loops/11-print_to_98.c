#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: interger used.
 * Return: 0
 */
void print_to_98(int n)
{
	n = 0;

	while (n <= 98)
	{
		printf("%d", n);
		printf(", ");
		n = n + 1;
	}
}

