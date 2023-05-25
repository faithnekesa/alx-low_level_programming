#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -function that prints numbers, followed by a new line.
 * @separator: String to be printed between numbers
 * @n:  number of integers passed to the function
 * Return: The string,void if the string is empty and nil if
 * string is NULL
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		printf("%s", string != NULL ? string : "(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
