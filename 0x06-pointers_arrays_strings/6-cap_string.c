#include "main.h"
/**
 * cap_string -Function that capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int counter, i;

	counter = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (counter == 1 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
			counter = 0;
		}
		counter = is_counter(s[i]);
		i++;
}
	return (s);
}
