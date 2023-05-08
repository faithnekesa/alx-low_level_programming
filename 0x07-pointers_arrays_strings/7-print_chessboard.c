#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -function that prints the chessboard
 * @a: Pointer input.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			printf('\n');
		}
		printf(a[i / 8][i - j]);
	}
	printf('\n');
}
