#include <stdio.h>
/**
 * main - entry point; printing lowercase in reverse
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
