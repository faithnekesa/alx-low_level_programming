#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates memory block using malloc and free
 * @ptr:pointer to the memory previously allocated with a call to malloc
 * @old_size:size of the memory allocated for ptr
 * @new_size:new size of the new memory block
 * Return: pointer to the newly allocated memory block
 * return ptr if new_size == old_size
 * If malloc fails, returns NULL.
 * If new_size = zero, and ptr is not NULL, the free(ptr).
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
char *old_ptr;
unsigned int counter;

if (new_size == old_size)
	return (ptr);
if (new_size == 0 && ptr)
{
	free(ptr);
	return (NULL);
}
if (!ptr)
	return (malloc(new_size));
new_ptr = malloc(new_size);
if (!new_ptr)
	return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
	for (counter = 0; counter < new_size; counter++)
		new_ptr[counter] = old_ptr[counter];
	}
	if (new_size > old_size)
	{
		for (counter = 0; counter < old_size; counter++)
			new_ptr[counter] = old_ptr[counter];
		}
		free(ptr);
		return (new_ptr);
}
