#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: The string being searched.
 * @c: The character to be located in string s.
 *
 * Return: pointer to the first occurence if c is found.
 * Otherwise return NULL if c not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
