#include <stdio.h>
#include "main.h"

/**
 * print_binary -  should print the binary form
 *@n: the integer to be converted
 *
 *Find the number of bits in unsigned long int
 *
 * Create a mask to extract the most significant bit
 *
 *Iterate through each bit and print it
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
