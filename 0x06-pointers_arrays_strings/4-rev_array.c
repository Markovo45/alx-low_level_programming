#include "main.h"
/**
 * reverse_array - reverses the content of an array of int.
 * @a: array of integer.
 * @n: number of element of the array.
 * Return 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		a[i] = a[(n - 1) - i];
		++i;
	}
}
