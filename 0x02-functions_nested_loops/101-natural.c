#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples.
 * Description: the function main Write a program that computes
 * and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + a;
		++a;
	}
	printf("%d", sum);
	printf("\n");
}


