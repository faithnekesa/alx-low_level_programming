#include <stdio.h>

void myFunc(void) __attribute__ ((constructor));

/**
 * myFunc -A function that prints a sentence before the main
 * function is executed
 */
void myFunc(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
