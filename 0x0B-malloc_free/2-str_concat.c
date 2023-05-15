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
	int counter1, counter2, result_len, len1, len2;
	char *concat_result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s1 != NULL)
	{
		counter1 = 0;
		while (s1[counter1++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		counter1 = 0;
		while (s2[counter1++] != '\0')
			len2++;
	}

	result_len = len1 + len2;
	concat_result = (char *)malloc(sizeof(char) * (result_len + 1));
	if (concat_result == NULL)
		return (NULL);

	for (counter1 = 0; counter1 < len1; counter1++)
		concat_result[counter1] = s1[counter1];
	for (counter2 = 0; counter2 < len2; counter2++, counter1++)
		concat_result[counter1] = s2[counter2];
	concat_result[result_len] = '\0';

	return (concat_result);
}
