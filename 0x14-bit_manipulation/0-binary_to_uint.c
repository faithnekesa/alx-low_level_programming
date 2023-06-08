#include "main.h"

/**
 * binary_to_uint -A function that converts a binary num to an unsigned int
 * @b:String with binary number
 * Return:the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int counter;
unsigned int convertedNum = 0;

if (!b)
	return (0);
for (counter = 0; b[counter]; counter++)
{
	if (b[counter] < '0' || b[counter] > '1')
		return (0);
	convertedNum = 2 * convertedNum + (b[counter] - '0');
	}
	return (convertedNum);
}
