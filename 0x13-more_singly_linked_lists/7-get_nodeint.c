#include "lists.h"

/**
 * get_nodeint_at_index -Function returns node at a given
 * position of the linked list
 * @head:The 1st node of the linked list
 * @index:The index of the node being returned
 * Return:The pointer to the node element at specified position
 * return NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter = 0;
listint_t *tempNode = head;

while (tempNode && counter < index)
{
	tempNode = tempNode->next;
	counter++;
}
return (tempNode ? tempNode : NULL);
}
