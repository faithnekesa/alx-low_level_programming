#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b:size allocated
 * Return:pointer to the allocated memory
 * otherwise return 98
*/

void *malloc_checked(unsigned int b)
{
char *allocator = malloc(b);
if (allocator == NULL)
{
	exit(98);
}

return (allocator);
}
