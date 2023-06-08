#include "main.h"

/**
 * get_endianness -A function that checks the endianness
 * Return:0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int counter = 1;
char *str = (char *) &counter;

return (*str);
}
