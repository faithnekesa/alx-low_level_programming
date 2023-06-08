#include "main.h"

/**
 * get_bit -A function which returns value of a bit at an
 * a given position in a decimal num
 * @n:The number to search
 * @index:The index of the bit
 * Return:The value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
	return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
