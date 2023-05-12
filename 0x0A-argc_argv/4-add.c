#include <stdio.h>
#include "main.h"

/**
 * main -function that returns sum of arguments passed
 *@argc: count of arguments supplied
 *@argv: array for all arguments in the program
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int counter, result = 0;

	if (argc < 2)
	printf("0\n");
	for (counter = 1; counter < argc; counter++)
	{
	if (*argv[counter] >= '0' && *argv[counter] <= '9')
	{
	result = result + atoi(argv[counter]);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
	printf("%d\n", result);
	return (0);
}
