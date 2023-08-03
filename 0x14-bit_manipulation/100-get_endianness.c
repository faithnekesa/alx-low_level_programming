#include "main.h"

/**
 * get_endianness - Function that checks endianness
 * Return:0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int counter = 1;
char *stringPtr = (char *) &counter;

return (*stringPtr);
}
