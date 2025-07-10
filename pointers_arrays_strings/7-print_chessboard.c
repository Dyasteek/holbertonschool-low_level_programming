#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 * Return: Empty
 */
/**
 * @a: board
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(*a[i]);
		for (i = 0; i <= 8; i++)
			_putchar(a[8][i]);
		_putchar('\n');
	}
}
