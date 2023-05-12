#include <stdio.h>
#include "main.h"

/**
 * main -prints the minimum number of coins to make change
 *@argc: count of arguments supplied
 *@argv: array for all arguments in the program
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int cents, count = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		count++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", count);

	return (0);
}
