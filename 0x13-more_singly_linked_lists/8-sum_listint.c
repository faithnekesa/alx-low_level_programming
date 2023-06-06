#include "lists.h"

/**
 * sum_listint -A function that calculates the sum 
 * of the data in the linked list
 * @head:The 1st node of the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int dataSum = 0;
listint_t *tempNode = head;

while (tempNode)
{
	dataSum += tempNode->n;
	tempNode = tempNode->next;
}
return (dataSum);
}
