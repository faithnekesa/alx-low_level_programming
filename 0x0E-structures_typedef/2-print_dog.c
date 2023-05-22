#include "dog.h"
#include <stdio.h>

/**
 * print_dog -the struct dog.
 * @d: pointer to the struct dog.
 * Return: print nil If an element of d is NULL
 * Return nothing if d is NULL
*/
void print_dog(struct dog *d)
{
if (d == NULL)
	return;
if (d->name == NULL)
	d->name = "(nil)";
if (d->owner == NULL)
	d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
