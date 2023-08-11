#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: elements of array
 *@size: bytes in the array
 *Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
