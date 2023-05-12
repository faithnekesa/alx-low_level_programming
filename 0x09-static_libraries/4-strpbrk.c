#include "main.h"

/**
 * _strpbrk - function that locates a substring
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: a pointer to the matched byte.
 * NULL otherwise.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
