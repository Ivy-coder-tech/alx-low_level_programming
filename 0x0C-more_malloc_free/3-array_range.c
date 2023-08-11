#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: The minimum integer
 *@max: The maximum integer
 *Return: Always 0
 */

int *array_range(int min, int max)
{
	int *br;
	int i;

	if (min > max)
		return (NULL);
	br = malloc(sizeof(*br) * ((max - min) + 1));

	if (br == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		br[i] = min;

	return (br);
}
