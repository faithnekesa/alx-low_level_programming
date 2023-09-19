#include "main.h"
/**
 * _strncpy -Function that copies a string
 * @dest: destination.
 * @src: source.
 * @n: bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
		dest[counter] = src[counter];
	for ( ; counter < n; counter++)
		dest[counter] = '\0';

	return (dest);
}
