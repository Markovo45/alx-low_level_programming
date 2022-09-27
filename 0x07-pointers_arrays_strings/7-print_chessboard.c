#include "main.h"

/**
 * print_chessboard - prints the standard chessboard
 * @a: pointers to pieces to print
 * return: 0.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			++j;
		}
		_putchar('\n');
		++i;
	}
	return (0);
}
