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

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
