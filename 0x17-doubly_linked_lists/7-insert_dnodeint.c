#include "lists.h"

/**
 * insert_dnodeint_at_index -Function that inserts a new node at nth position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *head;
dlistint_t *newNode;
unsigned int counter;

newNode = NULL;
if (idx == 0)
	newNode = add_dnodeint(h, n);
else
{
	head = *h;
	counter = 1;
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
	{
		if (counter == idx)
		{
			if (head->next == NULL)
				newNode = add_dnodeint_end(h, n);
			else
			{
				newNode = malloc(sizeof(dlistint_t));
				if (newNode != NULL)
				{
					newNode->n = n;
					newNode->next = head->next;
					newNode->prev = head;
					head->next->prev = newNode;
					head->next = newNode;
				}
			}
			break;
		}
		head = head->next;
		counter++;
	}
}
return (newNode);
}
