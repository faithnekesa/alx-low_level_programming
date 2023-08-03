#include "main.h"

/**
 * set_bit -A function that sets a bit at a given position to 1
 * @n:A pointer to the number being changed
 * @index:The index of the bit being set to 1
 * Return:1 if success, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);
*n = ((1UL << index) | *n);
return (1);
}
