#include "lists.h"

/**
 * add_nodeint_end -A function that adds a node at the end of a linked list
 * @head:A pointer to the first element of the linked list
 * @n:the data to insert in the new node
 * Return: the address of the new element
 * NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode;
listint_t *tempNode = *head;

newNode = malloc(sizeof(listint_t));
if (!newNode)
	return (NULL);
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
	*head = newNode;
	return (newNode);
	}
	while (tempNode->next)
		tempNode = tempNode->next;
	tempNode->next = newNode;
	return (newNode);
}
