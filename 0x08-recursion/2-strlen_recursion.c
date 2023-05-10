#include "main.h"

/**
 * _strlen_recursion -Function that returns string length
 * @s: The input string
 *
 * Return: lenth of the string
 */
int _strlen_recursion(char *s)
{
	int str_length = 0;

	if (*s)
	{
		str_length++;
		str_length += _strlen_recursion(s + 1);
	}

	return (str_length);
}
