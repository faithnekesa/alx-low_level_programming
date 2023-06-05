#include "lists.h"

/**
 * print_listint -A function that prints all the elements of a linked list
 * @h:A linked list of type listint_t to print
 * Return:The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
