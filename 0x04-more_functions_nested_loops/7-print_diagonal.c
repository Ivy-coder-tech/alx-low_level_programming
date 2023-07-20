#include "main.h"

/**
 * print_diagonal - prints diagonal using the '\' character
 * @n: number of times the '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar ('\n');
	else
	{
		int i, k;

		for (i = 0; i < n; i++)
		{
			for (k = 0; k <= i; k++)
				_putchar (' ');
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
