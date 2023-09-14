#include "lists.h"

/**
 * add_dnodeint_end -function that adds a new node at the
 * end of a dlistint_t list
 * @head:Head pointer of the list
 * @n:Element value
 * Return:Address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *headNode;
dlistint_t *newNode;

newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
	return (NULL);
newNode->n = n;
newNode->next = NULL;
headNode = *head;
if (headNode != NULL)
{
	while (headNode->next != NULL)
		headNode = headNode->next;
	headNode->next = newNode;
}
else
{
	*head = newNode;
}
newNode->prev = headNode;
return (newNode);
}
