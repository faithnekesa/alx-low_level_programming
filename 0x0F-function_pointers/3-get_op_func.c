#include "3-calc.h"
#include "string.h"

/**
 * get_op_func - select correct function for exe
 * @s: input params
 *
 * Return: 0 for code succes
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
int i;

for (i = 0; i < 5; i++)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);

}
return (NULL);
}
