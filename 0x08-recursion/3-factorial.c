#include "main.h"

/**
 * factorial - Function that returns factorial of a number.
 * @n: Input number to find factorial
 *
 * Return: factorial of n if n>0
 * and -1 if n<0
 */
int factorial(int n)
{
	int num_factorial = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	num_factorial *= factorial(n - 1);

	return (num_factorial);
}
