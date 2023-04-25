#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @alphabet: the character to be checked
 * Return: 1 if alphabet is a letter, 0 otherwise
 */
int _isalpha(int alphabet)
{
	return ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'));
}
