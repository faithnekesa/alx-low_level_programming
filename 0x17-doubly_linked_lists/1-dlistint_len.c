#include "lists.h"

/**
 * dlistint_len -Function that returns the number of elements
 *in a double linked list
 * @h:head pointer of the dlinkedlist
 * Return:The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
int elementCount = 0;

if (h == NULL)
	return (elementCount);
while (h->prev != NULL)
	h = h->prev;
while (h != NULL)
{
	elementCount++;
	h = h->next;
}
return (elementCount);
}
