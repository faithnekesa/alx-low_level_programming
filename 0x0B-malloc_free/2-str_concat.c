#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: String 1 to be concatenated
 * @s2: String 2 to be concatenated
 * Return: pointer pointing to newly allocated space in memory with s1 and s2
 * and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_counter;
	int i, len = 0;
	int concat_string = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_counter = malloc(sizeof(char) * len);

	if (concat_counter == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_string[concat_counter++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_string[concat_counter++] = s2[i];

	return (concat_counter);
}
