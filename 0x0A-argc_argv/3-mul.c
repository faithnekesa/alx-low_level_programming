#include <stdio.h>
#include "main.h"
/**
 *main -Function prints multiplication of 2 numbers.
 *@argc: count of arguments supplied
 *@argv: array for all arguments in the program
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int counter, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = 1;

		for (counter = 1; counter < 3; counter++)
		result *= atoi(argv[counter]);

		printf("%d\n", result);
	}

	return (0);
}
