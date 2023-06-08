#include "main.h"

/**
 * clear_bit -A function that sets a given bit value to 0
 * @n:A pointer to the number being updated
 * @index:The index of the bit being cleared
 * Return: 1 for success, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
