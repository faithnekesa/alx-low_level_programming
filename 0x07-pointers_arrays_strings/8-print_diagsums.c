#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - function that prints the sum of the two diagonals
 *of a square matrix of integers
 *@a: integers
 *@size: size of matrix
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	sum_1 = 0;
	sum_2 = 0;

	i = 0;
	while (i < size)
	{
		sum_1 = sum_1 + *(a + i * size + i);
		sum_2 = sum_2 + *(a + i * size + size - i - 1);

		i++;
	}

	printf("%i, %i\n", sum_1, sum_2);
}
