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
	int i;

	i = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", i);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %d and is 0\n", i);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", i);
	}
	return (0);
}
