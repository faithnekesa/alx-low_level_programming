#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from num to 98,
 * followed by a new line
 * @num: print from this number
 */
void print_to_98(int num)
{
	int i, j;

	if (num <= 98)
	{
		for (i = num; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (num >= 98)
	{
		for (j = num; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
