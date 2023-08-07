#include "main.h"

/**
 *create_array - creates array
 *@size: size of the array
 *@c: character to store in the array
 *Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *point;

	if (size == 0)
		return (NULL);

	point = malloc(sizeof(char) * size);

	if (point == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		point[j] = c;
	return (point);
}
