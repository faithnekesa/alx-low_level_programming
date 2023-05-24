#include "function_pointers.h"

/**
 * int_index -Function that searches for an integer
 * @array: array being passed
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Always(0) Success
 * Return -1 if no element matches
 * Return -1 if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
