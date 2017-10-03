#include"holberton.h"
/**
 *print_chessboard - prints a chessboard
 *@a: 8x8 array with piece positions
 */
void print_chessboard(char (*a)[8])
{
	int c, x;

	for (x = 0; x < 8; x++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[x][c]);
		_putchar('\n');
	}
}
