#include <stdio.h>
#include "lists.h"

/**
 * print_list -A function that prints elements of a linked list
 * @h:pointer to the list to be printed
 * Return: the number of nodes
 * str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
size_t node_count = 0;

 while (h)
 {
 if (!h->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", h->len, h->str);
 h = h->next;
 node_count++;
 }

 return (node_count);
}
