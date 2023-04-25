#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: integer whose last digit is to be printed
 * Return: lastdigit of num
 */
int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = _abs((num % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
