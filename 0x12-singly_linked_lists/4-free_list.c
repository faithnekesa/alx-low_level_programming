#include <stdlib.h>
#include "lists.h"

/**
 * free_list- A function that frees a linked list
 * @head:A pointer to the list_t to be freed
 */
void free_list(list_t *head)
{
list_t *tempNode;

while (head)
{
	tempNode = head->next;
	free(head->str);
	free(head);
	head = tempNode;
}
}
