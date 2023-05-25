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
va_list arg_list;
unsigned int counter;

va_start(arg_list, n);

for (counter = 0; counter < n; counter++)
{
printf("%d", va_arg(arg_list, int));

if (separator != NULL && counter != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(arg_list);
}
