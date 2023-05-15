#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL on failure, If width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **array_2D;
	int height_counter, width_counter;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2D = malloc(sizeof(int *) * height);

	if (array_2D == NULL)
		return (NULL);

	for (height_counter = 0; height_counter < height; height_counter++)
	{
		array_2D[height_counter] = malloc(sizeof(int) * width);

		if (array_2D[height_counter] == NULL)
		{
			for (; height_counter >= 0; height_counter--)
				free(array_2D[height_counter]);

			free(array_2D);
			return (NULL);
		}
	}

	for (height_counter = 0; height_counter < height; height_counter++)
	{
		for (width_counter = 0; width_counter < width; width_counter++)
			array_2D[height_counter][width_counter] = 0;
	}

	return (array_2D);
}
