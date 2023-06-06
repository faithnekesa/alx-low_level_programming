#include "lists.h"

/**
 * insert_nodeint_at_index -A function that inserts a new node in a
 * linked list at a specified position
 * @head:The pointer to the 1st node od the linked list
 * @idx: the index of the list where the new node will be added
 * @n:the data to be inserted in the new node
 * Return: the address of the new node
 * return NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int counter;
listint_t *newNode;
listint_t *tempNode = *head;

newNode = malloc(sizeof(listint_t));
if (!newNode || !head)
	return (NULL);
newNode->n = n;
newNode->next = NULL;
if (idx == 0)
{
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
for (counter = 0; tempNode && counter < idx; counter++)
{
	if (counter == idx - 1)
	{
		newNode->next = tempNode->next;
		tempNode->next = newNode;
		return (newNode);
	}
	else
		tempNode = tempNode->next;
	}
	return (NULL);
}
