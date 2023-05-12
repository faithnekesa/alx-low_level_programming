#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte
 *@s: memory pointer block
 *@b: constant byte
 *@n: bytes of the memory area pointed to by s
 *
 *Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	/*increament s*/
		*(s + i) = b;

	}

	return (s);
}
