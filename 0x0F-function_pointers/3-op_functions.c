#include "3-calc.h"
/**
 * op_add - addition
 * @a: nb a
 * @b: nb b
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: nb a
 * @b: nb b
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multipliacation
 * @a: nb a
 * @b: nb b
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: nb a
 * @b: nb b
 * Return: result
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo
 * @a: nb a
 * @b: nb b
 * Return: result
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
