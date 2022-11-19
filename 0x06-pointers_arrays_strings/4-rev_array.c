#include "main.h"
/**
 * reverse_array - reverses the content of an array of int.
 * @a: array of integer.
 * @n: number of element of the array.
 * Return 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i <= n / 2)
	{
		temp = a[(n - 1) - i];
		a[(n - 1) - i] = a[i];
		a[i] = temp;
		++i;
	}
}
