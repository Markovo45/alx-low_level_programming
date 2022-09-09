#include <stdio.h>

/**
* main - print the string in the printf function
*
* Description : using the main function
* this program prints "with proper grammer, but the outcome is a piece of art
* Return: 0
*/
int main(void)
{
	int i;
	char c;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld\n", sizeof(c));
	printf("Size of a int: %ld\n", sizeof(i));
	printf("Size of a long int: %ld\n", sizeof(li));
	printf("Size of a long long int: %ld\n", sizeof(lli));
	printf("Size of a float: %ld\n", sizeof(f));
	return (0);
}
