#include <stdio.h>
#include "main.h"
/**
 * main -prints the number of arguments passed into it.
 *@argc: count of arguments supplied
 *@argv: array for all arguments in the program
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int counter;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (counter = 0; *argv; counter++, argv++)
			;
		printf("%d\n", counter - 1);
	}

	return (0);
}
