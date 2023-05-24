#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point for a function that does basic operations
 * @argc: argument count
 * @argv: Argument arrays
 * Return: 1 for success and 0 otherwise
*/

int main(int argc, char *argv[])
{
int a, b;
int (*fptr)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
fptr = get_op_func(argv[2]);
if (!fptr)
{
	printf("Error\n");
	exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
printf("%i\n", fptr(a, b));
return (1);
}
