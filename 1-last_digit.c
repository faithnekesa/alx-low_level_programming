#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * @void: no argument
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{printf("Last digit of %d is %d and is 0\n", n, n % 10);

	}
	return (0);
}