#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms under 4000000
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 1, j = 2, sum = j, tmp;

	while (j < 4000000)
	{
		tmp = i + j;
		i = j;
		j = tmp;
		sum += (j % 2 == 0) ? j : 0;
	}
	printf("%li\n", sum);
	return (0);
}
