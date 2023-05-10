#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Function that returns prime or not
 * @n: number being evaluated
 *
 * Return: 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if number is prime recursively
 * @n: number being evaluated
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
