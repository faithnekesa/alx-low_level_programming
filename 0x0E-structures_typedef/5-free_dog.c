#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -Function that frees memory allocated to struct dog
 * @d: struct for dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	} else
		return;
}
