#include "main.h"
#include <stdlib.h>
/**
 * _calloc -function that allocates memory for an array, using malloc
 * @nmemb: the number of elements.
 * @size: bytes returned
 * Return: pointer to the allocated memory
 * NULL If nmemb or size is 0
 * NULL if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *elements;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
		return (NULL);

	elements = malloc(nmemb * size);

	if (elements == NULL)
		return (NULL);

	for (counter = 0; counter < (nmemb * size); counter++)
		elements[counter] = 0;

	return (elements);
}
