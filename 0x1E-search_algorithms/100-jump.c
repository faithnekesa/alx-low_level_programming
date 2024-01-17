#include "search_algos.h"

/**
  * jump_search -function that searches for a value in a sorted array of
  * integers using the Jump search algorithm
  * @array: Pointer to the first element of the array being sought in
  * @size: Array size
  * @value: value to search
  * Return: First index where the value is located or NULL or -1 if value
  * is not present
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	if (jump >= size)
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
