#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - converts binary to integer/decimals
 *@b: pointer to the binary to be changed
 *Return: Always 0 (output)
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i = 0;
	size_t sum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		sum <<= 1;
		if (b[i] == '1')
			sum++;
	}
	return (sum);
}
