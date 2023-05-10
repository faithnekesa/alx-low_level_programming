#include "main.h"

/**
 * _pow_recursion - Function that returns x raised to the power of y
 * @x: The number being computed
 * @y: The power
 *
 * Return: Resukt of power computation
 */
int _pow_recursion(int x, int y)
{
	int power_result;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	power_result *= _pow_recursion(x, y - 1);

	return (power_result);
}
