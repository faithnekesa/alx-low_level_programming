#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: String 1 to be concatenated
 * @s2: String 2 to be concatenated
 * Return: pointer to newly allocated memory with s1 and s2
 * and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
        char *concat_result;
        unsigned int counter1, counter2, len1, len2 = 0;

		if (s1 == NULL || s2 == NULL) {
		return NULL;
		if (s1 != NULL)
        {
                while (s1[counter1++] != '\0')
                        len1++;
        }
		concat_result = malloc(sizeof(char) * (len1 + len2 + 1));
        if (concat_result == NULL)
                return (NULL);

        if (s2 != NULL)
        {
                while (s2[counter1++] != '\0')
                        len2++;
        }
        counter1 = 0;
        counter2 = 0;

        if (s1)
        {
                while (counter1 < len1)
                {
                        concat_result[counter1] = s1[counter1];
                        counter1++;
                }
        }
        if (s2)
        {
                while (counter1 < (len1 + len2))
                {
                        concat_result[counter1] = s2[counter2];
                        counter1++;
						counter2++;
                }
        }
        concat_result[counter1] = '\0';
        return (concat_result);
}
