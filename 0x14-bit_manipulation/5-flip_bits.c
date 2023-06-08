#include "main.h"

/**
 * flip_bits -A function that counts the  num of bits being updated
 * @n:The 1st num
 * @m:The 2nd num
 * Return:the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int counter, nodeCount = 0;
unsigned long int currentNode;
unsigned long int thisNode = n ^ m;

for (counter = 63; counter >= 0; counter--)
{
	currentNode = thisNode >> counter;
	if (currentNode & 1)
		nodeCount++;
}
return (nodeCount);
}
