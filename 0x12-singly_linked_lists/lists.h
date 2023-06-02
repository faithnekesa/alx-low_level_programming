#ifndef LISTS_H_
#define LISTS_H_

/**
 * struct list_s -List for singly list
 * @str:the string pointer
 * @len:the length of the string
 * @next: points to the next node
 * Description:The structure for singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif

