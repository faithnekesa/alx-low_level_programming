#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - a function that prints anything
* @format:list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
unsigned int counter = 0;
char *ptr;
char *ptr2 = "";

va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[counter])
		{
			switch (format[counter])
			{
				case 'c':
					printf("%s%c", ptr2, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ptr2, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ptr2, va_arg(list, double));
					break;
				case 's':
					ptr = va_arg(list, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", ptr2, ptr);
					break;
				default:
					counter++;
					continue;
			}
			ptr2 = ", ";
			counter++;
		}
	}

	printf("\n");
	va_end(list);
}
