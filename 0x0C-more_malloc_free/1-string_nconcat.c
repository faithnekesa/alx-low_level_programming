#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- function that concatenates all arguments of the program
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: pointer size
 * Return: pointer to a new string, or NULL if it fails
 * if NULL is passed, treat it as an empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len, s2_len, counter;
char *new_str;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	;

for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	;

	if (n >= s2_len)
		n = s2_len;

new_str = malloc(sizeof(char) * n + s1_len + 1);
if (new_str == NULL)
	return (NULL);

for (counter = 0; counter < s1_len; counter++)
	new_str[counter] = s1[counter];

for (counter = 0; counter < n; counter++)
	new_str[counter + s1_len] = s2[counter];

	new_str[counter + s1_len] = '\0';

	return (new_str);
}
