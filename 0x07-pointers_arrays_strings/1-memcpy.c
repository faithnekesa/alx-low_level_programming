#include "main.h"
/**
 * _memcpy -a function that copies n bytes from memory
 * area src to memory area dest
 * @dest: pointer to destination memory add.
 * @src: pointer to source memory add.
 * @n: bytes to be copied.
 * Return: the pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
