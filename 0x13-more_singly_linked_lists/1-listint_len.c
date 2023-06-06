#include "lists.h"

/**
 * listint_len -A function that returns number of elements of a linked list
 * @h:A linked list of type listint_t to traverse
 * Return:The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
size_t node_count = 0;

while (h)
{
	node_count++;
	h = h->next;
}
return (node_count);
}
