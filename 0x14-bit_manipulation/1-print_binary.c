#include "main.h"

/**
 * print_binary -A function that prints a binary
 * equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int currentNode;
int counter, count = 0;

for (counter = 63; counter >= 0; counter--)
{
currentNode = n >> counter;

if (currentNode & 1)
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
