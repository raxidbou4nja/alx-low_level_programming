#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the
 *			   operation asked by the user
 * @s: The operator passed as argument to the program
 *
 * Return: Pointer to the corresponding function,
 *		 or NULL if the operator is invalid
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

	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
