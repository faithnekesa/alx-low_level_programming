#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -Function that adds a new node at the linked list end
 * @head:A pointer to the list_t
 * @str:A new string to add in the new node
 * Return: Address of the new element
 * Return NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;
list_t *tempNode = *head;
unsigned int len = 0;

while (str[len])
	len++;
newNode = malloc(sizeof(list_t));
if (!newNode)
	return (NULL);
newNode->str = strdup(str);
newNode->len = len;
newNode->next = NULL;
if (*head == NULL)
{
	*head = newNode;
	return (newNode);
	}
	while (tempNode->next)
		tempNode = tempNode->next;
	tempNode->next = newNode;
return (newNode);
}
