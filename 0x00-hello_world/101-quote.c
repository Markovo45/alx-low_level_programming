#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
* main - print the string in the fwrite function
*
* Description : using the main function
* this program prints exactly and that piece of art
* is useful" - Dora Korpar, 2015-10-19,
* followed by a new line, to the standard error.
* Return: 0
*/
int main(void)
{
	write("\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (0);
}