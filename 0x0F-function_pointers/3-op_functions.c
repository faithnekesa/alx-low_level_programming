#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add -Function that adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -Function that subtracts two integers
 * @a: First integer
 * @b: Second integer
 * Return: Difference of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -Function that divides two integers
 * @a: First integer
 * @b: Second integer
 * Return: Quotient of the two integers
 */

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function that calculates the modulus for two integers
 * @a: First integer
 * @b: Second integer
 * Return: The modulus of two integers
 */

int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
