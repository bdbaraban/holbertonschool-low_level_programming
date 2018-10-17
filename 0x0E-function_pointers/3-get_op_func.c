/*
 * File: 3-get_op_func.c
 * Auth: Brennan D Baraban
 */

#include "3-calc.h"
#include <stdlib.h>

/**
 * match_op - Matches an operator with a corresponding
 *            function located in an array of structs.
 * @ops: A pointer to an array of struct ops.
 * @op: A pointer to the operator to match.
 *
 * Return: The index of the struct within ops containing
 *         the function corresponding to op.
 */
int match_op(op_t *ops, char *op)
{
	if (ops->op == NULL || *(ops->op) == *op)
		return (0);

	return (match_op(++ops, op) + 1);
}

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
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
	
	i = match_op(ops, s);

	return (ops[i].f);
}
