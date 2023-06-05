#include "lists.h"

/**
 * add_nodeint -A function that adds a new node at the start of a linked list
 * @head:A pointer to the first node in the linked list
 * @n: data to insert in that new node
 * Return:A pointer to the new node
 * NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

newNode = malloc(sizeof(listint_t));
if (!newNode)
	return (NULL);
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
