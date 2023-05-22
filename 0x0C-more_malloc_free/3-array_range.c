#include "main.h"
#include <stdlib.h>
/**
 * array_range -function that creates an array of integers.
 * @min: The minimum value
 * @max: The maximum value
 * Return:the pointer to the newly created array
 * NULL if min>max and NULL if malloc fails
*/

int *array_range(int min, int max)
{
int *int_arr;
int counter;

if (min > max)
	return (NULL);
int_arr = malloc(sizeof(*int_arr) * ((max - min) + 1));
if (int_arr == NULL)
	return (NULL);
for (counter = 0; min <= max; counter++, min++)
	int_arr[counter] = min;
return (int_arr);
}
