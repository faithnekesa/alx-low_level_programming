#include "main.h"

/**
 * print_binary -Function that prints a binary
 * decimal num equivalent
 * @n:The number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int currNode;
int counter, count = 0;

for (counter = 63; counter >= 0; counter--)
{
currNode = n >> counter;

if (currNode & 1)
{
	_putchar('1');
	count++;
}
else if (count)
	_putchar('0');
}
if (!count)
	_putchar('0');
}
