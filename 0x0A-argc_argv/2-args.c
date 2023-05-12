#include <stdio.h>

/**
 * main -prints the number of arguments passed into it.
 *@argc: count of arguments supplied
 *@argv: array for all arguments in the program
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	printf("%s\n", argv[counter]);

	return (0);
}
