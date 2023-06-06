#include "lists.h"

/**
 * pop_listint -A function that deletes head node of a linked list
 * @head:A pointer to the 1st element in the linked list
 * Return:The head node’s data (n)
 * return 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tempNode = (*head)->next;
	free(*head);
	*head = tempNode;

	return (data);
}
