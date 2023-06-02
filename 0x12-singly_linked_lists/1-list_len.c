#include <stdlib.h>
#include "lists.h"

/**
 * list_len -Function that returns num of elements in a linked list
 * @h:pointer to the list to be printed
 * Return:The number of elements in a linked list_t h
 */
size_t list_len(const list_t *h)
{
 size_t node_count = 0;

 while (h)
 {
 node_count++;
 h = h->next;
 }
 return (node_count);
}
