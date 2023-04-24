#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	int i;

	for (i = 0; i < 90; i++)
	{
		putchar(i / 10 % 10 + '0');
		putchar(i % 10 + '0');
		if (i < 90)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
