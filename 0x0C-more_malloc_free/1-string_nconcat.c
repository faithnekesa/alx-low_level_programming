#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- function that concatenates all arguments of the program
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: size of the pointer
 * Return: pointer to a new string, or NULL if it fails
 * if NULL is passed, treat it as an empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_len, s2_len, counter, concat_string;
	{
		if (s1 == NULL || s2 == NULL)
		{
			for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
				;
			for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
				;
		if (n > s2_len)
			n = s2_len;
		concat_string = s1_len + n;
		new_str = malloc(concat_string + 1);
		if (new_str == NULL)
			return (NULL);
		for (counter = 0; counter < concat_string; counter++)
		{
			if (counter < s1_len)
				new_str[counter] = s1[counter];
			else
				new_str[counter] = s2[counter - s1_len];
			new_str[counter] = '\0';
			return (new_str);
		}
