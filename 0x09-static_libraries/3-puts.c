#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
