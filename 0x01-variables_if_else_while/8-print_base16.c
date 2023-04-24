#include <stdio.h>
/**
 * main - entry point; prints numbers to base 16
 * @void: no argument
 * Return: 0
 */
int main(void)
{
	int i;
	char alphabet;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	for (alphabet = 'a'; alphabet < 'g'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
