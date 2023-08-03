#include "main.h"

/**
 *_pow_recursion -  raised to the power of
 *@x: the number
 *@y: Raise power
 *Return: the value to return
 */

int _pow_recursion(int x, int y)
{
	if (y <  0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
