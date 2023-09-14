#include "lists.h"

/**
 * sum_dlistint -Function that returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head:Head pointer of the list
 * Return:Sum of all the data of the list
 */
int sum_dlistint(dlistint_t *head)
{
int dataSum = 0;

if (head != NULL)
{
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		dataSum += head->n;
		head = head->next;
	}
}
return (dataSum);
}
