#include "lists.h"

/**
 * delete_nodeint_at_index -A function that deletes a
 * node in a linked list at a given position
 * @head:A pointer to the 1st node in the list
 * @index:The position of the element to delete
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempNode = *head;
listint_t *currentNode = NULL;
unsigned int counter = 0;

if (*head == NULL)
	return (-1);
if (index == 0)
{
	*head = (*head)->next;
	free(tempNode);
	return (1);
}
while (counter < index - 1)
{
	if (!tempNode || !(tempNode->next))
		return (-1);
	tempNode = tempNode->next;
	counter++;
}
currentNode = tempNode->next;
tempNode->next = currentNode->next;
free(currentNode);
return (1);
}
