#include "main.h"

/**
* _isdigit - Checks for a digit between 0 and 9
* @c: char to check
* Return:  0 if digit or 1 otherwise
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
