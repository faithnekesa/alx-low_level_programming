#include "main.h"

/**
 * flip_bits -Function that counts the  num of bits being updated
 * @n: 1st number
 * @m: 2nd number
 * Return: Number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int counter, countNode = 0;
unsigned long int currNode;
unsigned long int thisNode = n ^ m;

for (counter = 63; counter >= 0; counter--)
{
	currNode = thisNode >> counter;
	if (currNode & 1)
		countNode++;
}
return (countNode);
}
