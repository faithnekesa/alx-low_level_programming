#include "lists.h"

/**
 * free_listint -A function that frees a linked list
 * @head:The linked list listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *tempNode;

while (head)
{
	tempNode = head->next;
	free(head);
	head = tempNode;
	}
}
