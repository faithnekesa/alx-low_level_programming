#include "lists.h"

/**
 * get_dnodeint_at_index -Function that returns the nth node
 * of a dlistint_t linked list
 * @head:Head pointer of the dllist
 * @index:Index of the node to search, from 0
 * Return:The nth node or null if node doesn't exist
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tempNode;
unsigned int listLen = 0;

if (head == NULL)
return (NULL);

tempNode = head;
while (tempNode)
{
if (index == listLen)
return (tempNode);
listLen++;
tempNode = tempNode->next;
}
return (NULL);
}
