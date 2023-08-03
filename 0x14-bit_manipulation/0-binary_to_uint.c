#include "main.h"

/**
 * binary_to_uint -Function that converts binary number to an unsigned int
 * @b:The string with binary number
 * Return:the converted number or 0 if there's one or more characters in the
 * string that's not 0 or 1
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
