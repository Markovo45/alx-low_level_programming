#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether n is positive or negative.
 *
 * Description: the main function prints whether
 * the number stored in the variable n is positive or negative
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
