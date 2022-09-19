i#include "main.h"

/**
 * swap_int - swabs the value of pointer.
 * @a: first integer argument
 * @b: Second integer argument.
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
