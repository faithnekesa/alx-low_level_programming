#include "main.h"
#include <stdio.h>

/**
 * print_chessboard -function that prints the chessboard
 * @a: Pointer input.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			putchar (a[i][j]);
			j++;
		}
		putchar ('\n');
		i++;
	}

}
