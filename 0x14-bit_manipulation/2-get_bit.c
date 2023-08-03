#include "main.h"

/**
 * get_bit -Function that returns value of a bit at
 * a given position in a decimal num
 * @n:Number to search
 * @index:The index of the bit
 * Return:Value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bitVal;

if (index > 63)
	return (-1);
bitVal = (n >> index) & 1;
return (bitVal);
}
