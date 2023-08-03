#include "main.h"

/**
 * clear_bit -Function that sets a given bit value to 0
 * @n: Pointer to the number being updated
 * @index: Index of the bit to be cleared
 * Return: 1 for success, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
