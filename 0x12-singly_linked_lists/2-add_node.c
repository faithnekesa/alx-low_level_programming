#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Function that add a new node at the start
 * of a list
 * @head:A pointer to the list_t list
 * @str:A new string to add in the new node
 * Return: Address of the new element
 * Return NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int len = 0;
while (str[len])
	len++;
newNode = malloc(sizeof(list_t));
if (!newNode)
	return (NULL);
newNode->str = strdup(str);
newNode->len = len;
newNode->next = (*head);
(*head) = newNode;
return (*head);
}
