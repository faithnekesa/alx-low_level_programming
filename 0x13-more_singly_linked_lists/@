#include "lists.h"

/**
 * reverse_listint -A function that reverses a linked list
 * @head:A pointer to the 1st node in the list
 * Return:A pointer to the 1st node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prevNode = NULL;
listint_t *next = NULL;

while (*head)
{
	next = (*head)->next;
	(*head)->next = prevNode;
	prevNode = *head;
	*head = next;
}
*head = prevNode;
return (*head);
}

