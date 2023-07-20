#include "main.h"

/**
 *more_numbers - print numbers from 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int b;
	int h;

	for (b = 1; b <= 10; b++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h > 9)
				_putchar (h / 10 + '0');
			_putchar (h % 10 + '0');
		}
		_putchar ('\n');
	}
}
