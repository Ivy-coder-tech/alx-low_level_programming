#include <stdio.h>
#include "main.h"

/**
 *_putchar - writes to character c to stdout
 *@c: The character to print
 *Return: 0 (Sucess) or 1 (Fail)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
