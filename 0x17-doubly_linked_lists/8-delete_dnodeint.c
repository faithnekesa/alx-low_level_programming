#include "lists.h"

/**
 * delete_dnodeint_at_index -function that deletes the node
 * at index of a dlistint_t linked list
 * @head:Head pointer of the list
 * @index:New node index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t  *prevHead;
dlistint_t *newHead;
unsigned int counter = 0;

prevHead = *head;

if (prevHead != NULL)
	while (prevHead->prev != NULL)
		prevHead = prevHead->prev;

while (prevHead != NULL)
{
	if (counter == index)
	{
		if (counter == 0)
		{
			*head = prevHead->next;
			if (*head != NULL)
				(*head)->prev = NULL;
		}
		else
		{
			newHead->next = prevHead->next;

			if (prevHead->next != NULL)
				prevHead->next->prev = newHead;
		}

		free(prevHead);
		return (1);
	}
	newHead = prevHead;
	prevHead = prevHead->next;
	counter++;
}

return (-1);
}
