#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all -function that returns sum of all its params
* @n: n args
* Return: sum of params
* Return 0 If n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	int sum = 0;
	va_list arg_list;

	if (n)
	{
		va_start(arg_list, n);
		for (counter = 0; counter < n; counter++)
		{
			sum += va_arg(arg_list, int);
		}
		va_end(arg_list);
	}
	return (sum);
}
