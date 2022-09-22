#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the Fizz-Buzz text.
 * Description: The function print Fuzz for multiple of 3,
 * Buzz for multiple of 5 and FizzBuzz for multiple of both.
 * Return: 0.
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n == 100)
		{
			printf("Fizz");
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", n);
		}
		++n;
	}
	printf("\n");
}
