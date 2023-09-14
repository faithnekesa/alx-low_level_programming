#include "lists.h"

/**
 * add_dnodeint -function that adds a new node at
 * the beginning of a dlistint_t list
 * @head:head pointer of the list
 * @n:Element value
 * Return:Address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode;
dlistint_t *headNode;

newNode = malloc(sizeof(dlistint_t));

if (newNode == NULL)
	return (NULL);
newNode->n = n;
newNode->prev = NULL;
headNode = *head;
if (headNode != NULL)
{
while (headNode->prev != NULL)
headNode = headNode->prev;
}
newNode->next = headNode;
if (headNode != NULL)
	headNode->prev = newNode;
*head = newNode;
return (newNode);
}
