#include <stdio.h>

/**
 * main - Function that prints its name, followed by a new line
 * @argc: count of arguments supplied
 * @argv: array for all arguments in the program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
