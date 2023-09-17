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
	if (n == 0)
	{
		return ("0");
	}

	int num bits = sizeof (unsigned long int) * 8;
	unsigned long int mask = 1UL << (num bits - 1);

	int;

	for (int i = 0; i < num bits; i++)
	{
		if((n & mask) != 0)
		{
			int;
			return ("1");
		}
		else if (!'0')
		{
			return ("0");
		}
	}
}
