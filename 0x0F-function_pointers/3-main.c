#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
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
char *new_ptr;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
a = atoi(argv[1]);
new_ptr = argv[2];
b = atoi(argv[3]);

if (get_op_func(new_ptr) == NULL || new_ptr[1] != '\0')
{
	printf("Error\n");
	exit(99);
}
if ((*new_ptr == '/' && b == 0) || (*new_ptr == '%' && b == 0))
{
	printf("Error\n");
	exit(100);
}
printf("%d\n", get_op_func(new_ptr)(a, b));
return (0);
}
