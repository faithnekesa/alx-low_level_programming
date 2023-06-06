#include "lists.h"

/**
 * free_listint2 -A function that frees a linked list
 * @head:The pointer to  listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *tempNode;
if (head == NULL)
	return;
while (*head)
{
	tempNode = (*head)->next;
	free(*head);
	*head = tempNode;
	}
	*head = NULL;
}
