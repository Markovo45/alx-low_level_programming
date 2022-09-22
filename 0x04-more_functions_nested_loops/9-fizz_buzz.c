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
	char a[] = "Fizz";
	char b[] = "Buzz";
	char c[] = "FizzBuzz";

	while (n <= 100)
	{
		if (n == 100)
			printf("%s", b);
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s ", c);
		else if (n % 3 == 0)
			printf("%s ", a);
		else if (n % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", n);
		++n;
	}
	printf("\n");
}
