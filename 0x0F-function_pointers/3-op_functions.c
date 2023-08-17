#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *@op_add - The sum of two numbers
 *@a: The first number
 *@b: The second number
 *Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *@op_sub - The subtraction of two numbers
 *@a: The first number
 *@b: The second number
 *Return: The subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *@op_mul - The multiplication of two numbers
 *@a: The first number
 *@b: The second number
 *Return: The multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *@op_div - The division of two numbers
 *@a: The first number
 *@b: The second number
 *Return: The division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *@op_mod - The remainder of two numbers
 *@a: The first number
 *@b: The second number
 *Return: The remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
