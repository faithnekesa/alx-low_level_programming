#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - a function that prints anything
* @format:list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
va_list list;
char *ptr;
unsigned int a = 0, b = 1;

va_start(list, format);
while (format && format[a] != '\0')
{
	switch (format[a])
	{ case 'c':
	switch (b)
	{ case 1: printf(", "); }
	printf("%c", va_arg(list, int));
	break;
	case 'i':
	switch (b)
	{ case 1: printf(", "); }
	printf("%i", va_arg(list, int));
	break;
	case 'f':
	switch (b)
	{ case 1: printf(", "); }
	printf("%f", va_arg(list, double));
	break;
	case's':
	switch (b)
	{ case 1: printf(", "); }
	if (!ptr)
		ptr = "(nil)";
	ptr = va_arg(list, char*);
	if (ptr)
	{ printf("%s", ptr);
break; }
printf("%ptr", ptr);
break; }
a++;
}
printf("\n");
va_end(list);
}
