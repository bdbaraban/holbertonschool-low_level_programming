#ifndef CALC_H
#define CALC_H

/*
 * File: 3-calc.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing all structures and
 *       prototypes used by the 3-main.c program.
 */

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
